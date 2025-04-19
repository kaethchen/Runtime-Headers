@class NSString, NSArray, NSUUID;

@interface SASharedCache : NSObject <SASerializable, SAJSONSerialization, SALibraryCache> {
    unsigned long long _slide;
    unsigned long long _slidBaseAddress;
    BOOL _defunct;
    BOOL _isExclaveSharedCache;
    int _flags;
    unsigned int _sharedCacheID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSArray *binaryLoadInfos;
@property (readonly) unsigned long long slide;
@property (readonly) unsigned long long slidBaseAddress;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long startAddress;
@property (readonly) unsigned long long endAddress;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) unsigned long long textSegmentsEndAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCaches;
+ (void)addDSCSymData:(id)a0;
+ (void)addDscSymDir:(id)a0;
+ (id)classDictionaryKey;
+ (id)currentSharedCache;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)sharedCacheWithUUID:(id)a0 slide:(unsigned long long)a1;
+ (id)sharedCacheWithUUID:(id)a0 slide:(unsigned long long)a1 slidBaseAddress:(unsigned long long)a2;

- (void).cxx_destruct;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned char x2[16]; unsigned short x3; unsigned long long x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)matchesUUID:(unsigned char[16])a0 slide:(unsigned long long)a1;
- (BOOL)matchesUUID:(unsigned char[16])a0 slide:(unsigned long long)a1 slidBaseAddress:(unsigned long long)a2;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
