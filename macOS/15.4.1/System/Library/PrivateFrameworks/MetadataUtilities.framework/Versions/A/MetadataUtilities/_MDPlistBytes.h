@interface _MDPlistBytes : NSObject {
    unsigned long long _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    id /* block */ _deallocator;
    unsigned short _isBad : 16;
    unsigned char _isMutable : 1;
    unsigned char _isMutating : 1;
    unsigned char _didFinalize : 1;
    unsigned char _useMalloc : 1;
    unsigned long long *_wrapperPtr;
    unsigned long long *_uidVector;
    int _uidCount;
    int _uidCapacity;
    struct _malloc_zone_t { void *x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; char *x9; void /* function */ *x10; void /* function */ *x11; struct malloc_introspection_t *x12; unsigned int x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; } *_zone;
}

+ (struct __MDPlistBytes { } *)createArrayPlistBytesUsingBlock:(id /* block */)a0;
+ (struct __MDPlistBytes { } *)createDictionaryPlistBytesUsingBlock:(id /* block */)a0;
+ (struct __MDPlistBytes { } *)createPlistBytes:(id)a0;
+ (struct __MDPlistBytes { } *)emptyArrayPlistBytes;
+ (struct __MDPlistBytes { } *)emptyDictionaryPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)a0 count:(unsigned int)a1 shouldDeallocate:(BOOL)a2 usingBlock:(id /* block */)a3;
+ (struct __MDPlistBytes { } *)nullObjectPlistBytes;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (struct __CFData { } *)copyData;
- (struct __CFData { } *)copyDataWithBytesNoCopy;
- (void)dumpUIDs;
- (BOOL)enumerateQueryResults:(unsigned long long)a0 attributeSize:(unsigned long long)a1 stringCache:(struct { struct __CFDictionary *x0; struct __CFDictionary *x1; unsigned int x2; } *)a2 usingBlock:(id /* block */)a3;
- (void)enumerateQueryResults:(unsigned long long)a0 stringCache:(struct { struct __CFDictionary *x0; struct __CFDictionary *x1; unsigned int x2; } *)a1 usingBlock:(id /* block */)a2;
- (id)initWithByteVector:(char *)a0 count:(unsigned int)a1 deallocator:(id /* block */)a2;
- (id)initWithByteVector:(char *)a0 count:(unsigned int)a1 shouldDeallocate:(BOOL)a2;
- (id)initWithByteVector:(char *)a0 count:(unsigned int)a1 trusted:(unsigned char)a2 deallocator:(id /* block */)a3;

@end
