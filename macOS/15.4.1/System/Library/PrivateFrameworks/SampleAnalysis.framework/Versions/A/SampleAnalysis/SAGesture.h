@class NSString, NSMutableArray, SATimeRange;

@interface SAGesture : NSObject <SASerializable> {
    NSMutableArray *_hidEvents;
    int _pid;
    NSString *_gestureType;
    SATimeRange *_timeRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; int x2; unsigned long long x3; unsigned long long x4; unsigned short x5; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (id)initWithPid:(int)a0 type:(id)a1 startTime:(id)a2;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

@end
