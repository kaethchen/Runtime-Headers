@class NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface PPSEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _groupId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timeOffset;
@property (copy) NSMutableDictionary *metrics;
@property (copy) NSString *label;
@property (readonly) unsigned long long count;
@property (readonly) double epochTimestamp;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSArray *metricValues;
@property (readonly, copy) NSDictionary *metricKeysAndValues;
@property (readonly) double monotonicTimestamp;

+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2;
+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2 groupId:(unsigned long long)a3;
+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2 groupId:(unsigned long long)a3 label:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithEvent:(id)a0;
- (unsigned long long)groupId;
- (BOOL)isEqualToEvent:(id)a0;
- (id)JSONRepresentation;
- (id)logLine;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2 groupId:(unsigned long long)a3;
- (id)metricValueForKey:(id)a0;
- (id)metricValuesForKeys:(id)a0;

@end
