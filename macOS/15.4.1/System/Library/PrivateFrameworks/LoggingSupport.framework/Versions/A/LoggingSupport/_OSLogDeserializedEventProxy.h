@class _OSLogEventSerializationMetadata, NSDictionary;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    BOOL _unixDateNeedsLookup;
    BOOL _unixTimeZoneNeedsLookup;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _unixTimeZone;
    struct timeval { long long tv_sec; int tv_usec; } _unixDate;
    BOOL _lossStartUnixDateNeedsLookup;
    BOOL _lossStartUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossStartUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossStartUnixTimeZone;
    BOOL _lossEndUnixDateNeedsLookup;
    BOOL _lossEndUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossEndUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossEndUnixTimeZone;
    unsigned long long _type;
}

@property (retain, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (retain, nonatomic) NSDictionary *curEventDictionary;
@property (nonatomic) BOOL needsTypeLookup;

- (void).cxx_destruct;
- (id)date;
- (id)timeZone;
- (unsigned long long)type;
- (int)processIdentifier;
- (unsigned long long)size;
- (id)category;
- (id)process;
- (unsigned long long)threadIdentifier;
- (id)sender;
- (unsigned long long)timeToLive;
- (id)composedMessage;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (unsigned long long)activityIdentifier;
- (unsigned long long)signpostType;
- (id)formatString;
- (id)subsystem;
- (id)backtrace;
- (id)senderImageUUID;
- (unsigned long long)traceIdentifier;
- (unsigned long long)logType;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (id)senderImagePath;
- (id)_frameForDict:(id)a0;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (void)_resetNeedsLookup;
- (id)bootUUID;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)decomposedMessage;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)machContinuousTimestamp;
- (unsigned long long)parentActivityIdentifier;
- (id)processImagePath;
- (id)processImageUUID;
- (const char *)processImageUUIDBytes;
- (unsigned long long)senderImageOffset;
- (const char *)senderImageUUIDBytes;
- (unsigned long long)signpostIdentifier;
- (id)signpostName;
- (unsigned long long)signpostScope;
- (unsigned long long)transitionActivityIdentifier;
- (struct timezone { int x0; int x1; } *)unixTimeZone;

@end
