#include "Entry.h"

//Entry Class

/*

*/
Entry::Entry() {
    
}

Entry::Entry(EntryData data) {

}

Entry::~Entry() {
    
}

//Entry Data Class


EntryData::EntryData() {

}

EntryData::~EntryData() {

}

std::string EntryData::Serialize(Entry entry) {

}

EntryData EntryData::Parse(std::string encodedData) {
    EntryData data;
    return data;
}