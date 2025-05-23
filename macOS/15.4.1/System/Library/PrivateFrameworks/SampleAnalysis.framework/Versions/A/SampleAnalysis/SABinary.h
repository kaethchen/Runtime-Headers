@class NSString, NSUUID, NSArray, SACSSymbolOwnerWrapper, SASegment, NSMutableArray;

@interface SABinary : NSObject <SASerializable, SAJSONSerialization, NSCopying> {
    SACSSymbolOwnerWrapper *_symbolOwnerWrapper;
    unsigned long long _alreadyAttempted;
    NSString *_name;
    unsigned long long _optionsWhenLastSymbolicated;
    unsigned long long _length;
    SASegment *_fakeEntireBinarySegment;
    NSMutableArray *_segments;
    unsigned char _attemptedToGetBundleInfo : 1;
    unsigned char _attemptedToGetCodeSignInfo : 1;
    unsigned char _hadSymbolOwnerWhenLastSymbolicated : 1;
    unsigned char _symbolOwnerWasDsymWhenLastSymbolicated : 1;
    BOOL _haveMoreInstructionsToSymbolicate;
    BOOL _foundPathViaBinaryLocator;
    BOOL _haveMoreInstructionsToBulkSymbolicate;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_binaryVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) NSString *path;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *binaryVersion;
@property (readonly) NSString *codesigningID;
@property (readonly) NSString *teamID;
@property (readonly) NSArray *segments;
@property (readonly) unsigned long long textSegmentLength;
@property (readonly) BOOL hasTextExecSegment;

+ (void)clearCaches;
+ (id)binaryWithUUID:(id)a0 absolutePath:(id)a1;
+ (void)clearSymbolCaches;
+ (id)binaryWithUUID:(id)a0;
+ (void)addDsymPaths:(id)a0;
+ (void)addPath:(id)a0 forBinaryWithUUID:(id)a1;
+ (void)addSymbolsFromTailspin:(id)a0;
+ (id)classDictionaryKey;
+ (void)clearCoreSymbolicationCaches;
+ (void)enableImmediateCleanupOfCSSymbolOwners;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addPath:(id)a0;
- (void)gatherInfoWithDataGatheringOptions:(unsigned long long)a0 pid:(int)a1;
- (id)segmentWithName:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned char x2[16]; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; union { unsigned char x0; struct { unsigned char x0 : 1; } x1; } x10; unsigned short x11; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)cacheSymbolOwnerWithOptions:(unsigned long long)a0 pid:(int)a1;
- (BOOL)cacheSymbolOwnerWithOptions:(unsigned long long)a0 pid:(int)a1 additionalCSSymbolicatorFlags:(unsigned int)a2;
- (void)clearCoreSymbolicationCache;
- (void)clearSymbolCache;
- (id)initWithUUID:(id)a0 path:(id)a1;
- (id)instructionAtOffsetIntoBinary:(long long)a0;
- (id)instructionAtOffsetIntoTextSegment:(unsigned long long)a0;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)symbolicateAllInstructionsWithOptions:(unsigned long long)a0 pid:(int)a1;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
