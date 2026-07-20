#include <iostream>;
#include <ctime>;
#include <vector>;
#include <ftxui/ftxui.hpp>;

class Entry {
    private:
        //data
        time_t creationDate;
        time_t dueDate;
        std::string summary;
        std::string description;
        std::vector<std::string> tags;

    public:
        Entry();
        Entry(EntryData data);
        ~Entry();
};

class EntryData {
    public:
        EntryData();
        ~EntryData();

        /**
         * 
         * 
         * @param     entry The EntryObject to encode.
         * @return    An encoded String value.
         */
        std::string Serialize(Entry entry);

        /**
         * 
         * 
         * @param     serializedData The serialized String value that contains all an Entry objects data. 
         * @return    An EntryData object used in Entry classes' constructor.
         */
        EntryData Parse(std::string serializedData);
};