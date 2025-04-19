@class NSString, SATimestamp;

@interface SATimeRange : NSObject <SASerializable, SAJSONSerialization, NSCopying> {
    SATimestamp *_startTime;
    SATimestamp *_endTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *startTime;
@property (readonly) SATimestamp *endTime;
@property (readonly) unsigned long long deltaMachAbsTime;
@property (readonly) double deltaMachAbsTimeSeconds;
@property (readonly) unsigned long long deltaMachContTime;
@property (readonly) double deltaMachContTimeSeconds;
@property (readonly) double deltaWallTime;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)timeRangeStart:(id)a0 end:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithStart:(id)a0 end:(id)a1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (long long)deltaMachWithTimeDomainPriorityList:(id)a0 timeDomainUsed:(unsigned long long *)a1;
- (double)deltaSecondsWithTimeDomainPriorityList:(id)a0 timeDomainUsed:(unsigned long long *)a1;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
