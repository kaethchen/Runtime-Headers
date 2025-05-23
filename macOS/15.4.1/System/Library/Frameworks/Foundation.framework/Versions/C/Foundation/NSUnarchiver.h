@interface NSUnarchiver : NSCoder {
    void *datax;
    unsigned long long cursor;
    struct _NSZone { } *objectZone;
    unsigned long long systemVersion;
    char streamerVersion;
    char swap;
    char unused1;
    char unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    long long lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

@property (readonly, getter=isAtEnd) BOOL atEnd;
@property (readonly) unsigned int systemVersion;

+ (void)initialize;
+ (id)classNameDecodedForArchiveClassName:(id)a0;
+ (void)decodeClassName:(id)a0 asClassName:(id)a1;
+ (id)unarchiveObjectWithData:(id)a0;
+ (id)unarchiveObjectWithFile:(id)a0;

- (void)dealloc;
- (id)data;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (void)_setAllowedClasses:(id)a0;
- (id)classNameDecodedForArchiveClassName:(id)a0;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (void)decodeClassName:(id)a0 asClassName:(id)a1;
- (id)decodeDataObject;
- (id)decodeObject;
- (id)decodePropertyList;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (void)decodeValuesOfObjCTypes:(const char *)a0;
- (id)initForReadingWithData:(id)a0;
- (struct _NSZone { } *)objectZone;
- (void)setObjectZone:(struct _NSZone { } *)a0;
- (long long)versionForClassName:(id)a0;

@end
