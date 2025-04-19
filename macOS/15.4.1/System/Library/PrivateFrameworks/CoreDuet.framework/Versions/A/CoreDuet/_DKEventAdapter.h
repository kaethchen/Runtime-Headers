@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (double)doubleValue;
- (void).cxx_destruct;
- (BOOL)boolValue;
- (long long)integerValue;
- (long long)secondsFromGMT;
- (id)stringValue;
- (id)timeZone;
- (id)uuid;
- (id)value;
- (id)UUID;
- (id)endDate;
- (double)confidence;
- (id)source;
- (id)startDate;
- (id)stream;
- (id)creationDate;
- (long long)compatibilityVersion;
- (id)customMetadata;
- (long long)endDayOfWeek;
- (long long)endSecondOfDay;
- (id)localCreationDate;
- (id)metadata;
- (long long)startDayOfWeek;
- (long long)startSecondOfDay;
- (id)streamName;
- (id)structuredMetadata;
- (id)uuidHash;
- (short)valueClass;
- (double)valueDouble;
- (long long)valueInteger;
- (id)valueString;
- (long long)valueTypeCode;

@end
