@class NSString, NSDictionary;

@interface ABTracedLog : NSObject

@property (readonly) NSString *message;
@property (readonly) NSString *domain;
@property (copy) NSString *domainVersion;
@property (copy) NSString *domainScope;
@property (copy) NSString *signature;
@property (copy) NSString *signature2;
@property (copy) NSString *signature3;
@property (copy) NSString *value;
@property (copy) NSString *value2;
@property (copy) NSString *value3;
@property (copy) NSString *uuid;
@property BOOL summarize;
@property int result;
@property (copy) NSDictionary *customProperties;

+ (BOOL)shouldLogGivenSamplePercentage:(float)a0;
+ (id)formatIntegerByRoundingForPrivacy:(long long)a0;
+ (id)formatTimeIntervalByRoundingForPrivacy:(double)a0;
+ (id)logWithDomain:(id)a0;
+ (long long)roundNumber:(long long)a0 usingSignificantDigits:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (id)resultString;
- (void)enumerateCustomKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)enumerateStandardKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)enumerateStandardizedKeysAndValuesUsingBlock:(id /* block */)a0;
- (id)initWithDomain:(id)a0 message:(id)a1;
- (void)sendTrace;
- (void)sendValue:(id)a0 forKey:(id)a1 usingBlock:(id /* block */)a2;

@end
