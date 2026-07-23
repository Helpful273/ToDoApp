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
        static void CreateTag(std::string tagName);
        static void DeleteTag(std::string tagName);
};

template<typename T>
class Tag {
    private:
        std::vector<T> members;

    public:
        Tag(std::string tagName);
        void AddMember(T newMember);
        void RemoveMember(T member);
};