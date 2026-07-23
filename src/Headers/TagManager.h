#include <iostream>
#include <vector>
#include <memory>
#include <map>

/*
how should i connect tag manager to task?

*/

template<typename T>
class TagManager {
    private:
        static std::map<string, Tag<T>> tags;

    public:
        /**
         * Creates a new Tag in the manager. Throws a warning to the standard
         * output if the name of the Tag matches an existing key in the manager.
         * 
         * @param tagName The name of the Tag to create.
         */
        static void CreateTag(std::string tagName);

        /**
         * Deletes the specified Tag and from the manager. Throws a warning
         * to the standard output if the name of the Tag does not match a key
         * in the manager.
         * 
         * @param tagName The name of the Tag to delete.
         */
        static void DeleteTag(std::string tagName);
};

template<typename T>
class Tag {
    private:
        std::vector<std::shared_ptr<T>> members;

    public:
        Tag(std::string tagName);

        /**
         * "Tags" an object. It actually adds the pointer of the object into a
         * vector. 
         * 
         * @param newMember The object to tag.
         */
        void AddMember(std::shared_ptr<T> newMember);

        /**
         * "Untags" an object. It actually removes the pointer of the object from
         * a vector.
         * 
         * @param member The object to untag.
         */
        void RemoveMember(std::shared_ptr<T> member);
};