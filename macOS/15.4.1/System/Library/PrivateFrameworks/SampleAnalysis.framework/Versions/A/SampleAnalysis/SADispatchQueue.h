@class NSString, NSArray;

@interface SADispatchQueue : SARecipe <SASerializable> {
    BOOL _hasConcurrentExecution;
    NSString *_dispatchQueueLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *dispatchQueueLabel;
@property (readonly) BOOL hasConcurrentExecution;
@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) NSArray *dispatchQueueStates;
@property (readonly) BOOL isConcurrent;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned int x3; union { unsigned short x0; struct { unsigned char x0 : 1; } x1; } x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

@end
