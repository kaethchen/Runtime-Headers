@class NSString;

@interface SATimestamp : NSObject <SASerializable, SAJSONSerialization, NSCopying> {
    unsigned long long _machAbsTime;
    double _machAbsTimeSeconds;
    unsigned long long _machContTime;
    double _machContTimeSeconds;
    double _wallTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long machAbsTime;
@property (readonly) double machAbsTimeSeconds;
@property (readonly) unsigned long long machContTime;
@property (readonly) double machContTimeSeconds;
@property (readonly) double wallTime;

+ (id)now;
+ (id)timestamp;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)timestampWithMachAbsTime:(unsigned long long)a0 machAbsTimeSec:(double)a1 machContTime:(unsigned long long)a2 machContTimeSec:(double)a3 wallTime:(double)a4;
+ (id)timestampWithMachAbsTime:(unsigned long long)a0 machContTime:(unsigned long long)a1 wallTime:(double)a2 machTimebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (BOOL)isComparable:(id)a0;
- (BOOL)isEqualToTimestamp:(id)a0;
- (BOOL)eq:(id)a0;
- (BOOL)ge:(id)a0;
- (BOOL)gt:(id)a0;
- (BOOL)le:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)lt:(id)a0;
- (BOOL)ne:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; double x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (id)copyDate;
- (long long)deltaMachTo:(id)a0 timeDomainPriorityList:(id)a1 timeDomainUsed:(unsigned long long *)a2;
- (double)deltaSecondsTo:(id)a0 timeDomainPriorityList:(id)a1 timeDomainUsed:(unsigned long long *)a2;
- (void)guessMissingTimesBasedOnCurrentTime;
- (void)guessMissingTimesBasedOnTimestamp:(id)a0;
- (id)initWithMachAbsTime:(unsigned long long)a0 machAbsTimeSec:(double)a1 machContTime:(unsigned long long)a2 machContTimeSec:(double)a3 wallTime:(double)a4;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
