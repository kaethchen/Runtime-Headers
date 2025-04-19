@class NSString, NSArray, NSMutableArray;

@interface SAModel : NSObject <SASerializable, SAJSONSerialization> {
    NSMutableArray *_loadedChanges;
    NSMutableArray *_executions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long maxMemoryCostBytes;
@property (readonly) NSString *identifier;
@property (readonly) NSArray *loadedChanges;
@property (readonly) NSArray *executions;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addExecution:(id)a0;
- (void)addLoadedChange:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
