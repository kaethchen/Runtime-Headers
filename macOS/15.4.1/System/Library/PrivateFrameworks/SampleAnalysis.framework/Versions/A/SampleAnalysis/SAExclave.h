@class NSString, NSArray, SASharedCache, NSMutableSet;

@interface SAExclave : NSObject <SASerializable> {
    unsigned long long _textlayout_flags;
    NSMutableSet *_rootFrames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *name;
@property (readonly) unsigned long long identifier;
@property (readonly) BOOL synthetic;
@property (readonly) BOOL unslid;
@property (readonly) NSArray *loadInfos;
@property (readonly) SASharedCache *sharedCache;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

@end
