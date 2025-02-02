#include "/home/frank/Sappeur4x/ausg/haupt/cppMapping/mapping.h"
class SAPPEUR_DLL_EXPORT_A String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,16> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_16();
String_16(char* stackStartPtr,SPRStackArray<char>& init);
String_16(char* stackStartPtr,String_16& other);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_16& other);
void append(char* stackStartPtr,SPRSmartPtr<String_16> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_16& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_16> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_16& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_16> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_16& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_16& escaped,char escape);
void deEscape(char* stackStartPtr,String_16& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_16& str2);
void rightOf(char* stackStartPtr,char divider,String_16& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_16& oStr,int start,int end);
~String_16();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
longlong hashCodeLL(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_16& alt,String_16& neu,String_16& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_16> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_16& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_16& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_16& s1,String_16& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRStackArrayConcrete<char,128> _preAllocBuf;
SPRSmartPtr<SPRArray<char> > _extendedBuf;
int _length;
String_128();
String_128(char* stackStartPtr,SPRStackArray<char>& init);
String_128(char* stackStartPtr,String_128& other);
void print(char* stackStartPtr);
void printNoLF(char* stackStartPtr);
void append(char* stackStartPtr,SPRStackArray<char>& str);
void append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl);
void append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf);
void append(char* stackStartPtr,String_128& other);
void append(char* stackStartPtr,SPRSmartPtr<String_128> other);
void append(char* stackStartPtr,char c);
void append(char* stackStartPtr,int x);
void append(char* stackStartPtr,double d);
void append(char* stackStartPtr,longlong l);
void appendKurz(char* stackStartPtr,double d);
void appendHexOctet(char* stackStartPtr,int x);
void appendHex(char* stackStartPtr,longlong x);
void append(char* stackStartPtr,longlong x,int base);
void assign(char* stackStartPtr,SPRStackArray<char>& str);
void assign(char* stackStartPtr,char zeichen);
void assign(char* stackStartPtr,String_128& anderer);
void assign(char* stackStartPtr,SPRSmartPtr<String_128> anderer);
char getAt(char* stackStartPtr,int x);
void setAt(char* stackStartPtr,int stelle,char zeichen);
int capacity(char* stackStartPtr);
int length(char* stackStartPtr);
void clear(char* stackStartPtr);
void clearAndReclaimMemory(char* stackStartPtr);
int lengthOf(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,SPRStackArray<char>& str);
int compare(char* stackStartPtr,String_128& other);
void getKey(char* stackStartPtr,SPRSmartPtr<String_128> key);
int getHashCode(char* stackStartPtr);
void getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBuf);
int equals(char* stackStartPtr,String_128& other);
int equals(char* stackStartPtr,SPRStackArray<char>& other);
void toCharArray(char* stackStartPtr,SPRStackArray<char>& feld);
int asNumber(char* stackStartPtr);
int asNumber(char* stackStartPtr,int radix);
longlong asNumberLL(char* stackStartPtr,int radix);
double asDouble(char* stackStartPtr);
void escape(char* stackStartPtr,String_128& escaped,char escape);
void deEscape(char* stackStartPtr,String_128& deescaped,char escape);
int endsWith(char* stackStartPtr,SPRStackArray<char>& end);
int endsWith(char* stackStartPtr,String_128& str2);
void rightOf(char* stackStartPtr,char divider,String_128& oStr);
int startsWith(char* stackStartPtr,SPRStackArray<char>& buf);
void subString(char* stackStartPtr,String_128& oStr,int start,int end);
~String_128();
static int isNumberChar(char* stackStartPtr,char c);
int hashCode(char* stackStartPtr);
longlong hashCodeLL(char* stackStartPtr);
void ersetzen(char* stackStartPtr,String_128& alt,String_128& neu,String_128& ergebnis);
void unitTest(char* stackStartPtr);
int teileAuf(char* stackStartPtr,SPRSmartPtr<SPRArray<String_128> > spalten,char trenner);
void wandleKleinbuchstaben(char* stackStartPtr);
void wandleUmlaute(char* stackStartPtr,String_128& ziel);
void ensureCapacity(char* stackStartPtr,int minCapacity);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Hash_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int hash(char* stackStartPtr,String_128& str);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Compare_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static int compare(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class Assigner_String_128: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
static void assign(char* stackStartPtr,String_128& s1,String_128& s2);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_Entry_String_16_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
String_16 key;
String_16 value;
SPRSmartPtr<SPHT_Entry_String_16_String_16> next;
int is_used;
SPHT_Entry_String_16_String_16();
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

class SAPPEUR_DLL_EXPORT_A SPHT_String_16_String_16: public SPRObject {
public:
void addRef(){SPRObject::addRef();}
void release(){SPRObject::release();}
virtual SPRObject* getSPRObject(){return this;}
SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > _elements;
int numberOfEntries;
int iterator_pos;
SPRSmartPtr<SPHT_Entry_String_16_String_16> iterator_next;
SPHT_String_16_String_16();
void insert(char* stackStartPtr,String_16& key,String_16& value);
int search(char* stackStartPtr,String_16& key,String_16& value);
void del(char* stackStartPtr,String_16& key);
static void insertInternally(char* stackStartPtr,SPRSmartPtr<SPRArray<SPHT_Entry_String_16_String_16> > bins,String_16& key,String_16& value);
void resetIterator(char* stackStartPtr);
int nextElem(char* stackStartPtr,String_16& key,String_16& value);
int size(char* stackStartPtr);
void clear(char* stackStartPtr);
virtual void destroy_sappeur_internal();
void* operator new(size_t objectSize,void* place);
};

