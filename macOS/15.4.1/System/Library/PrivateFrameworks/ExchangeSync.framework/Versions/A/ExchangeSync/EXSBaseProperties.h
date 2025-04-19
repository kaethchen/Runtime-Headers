@interface EXSBaseProperties : NSObject

+ (id)components:(unsigned long long)a0 fromDate:(id)a1;
+ (id)dateFromComponents:(id)a0;
+ (id)log;
+ (id)dateAtMidnight:(id)a0;
+ (id)allComponentsFromDate:(id)a0;
+ (id)allComponentsFromDate:(id)a0 inTimeZone:(id)a1;
+ (id)dateByStrippingTime:(id)a0;
+ (id)dateComponentsFromDictionary:(id)a0;
+ (id)dictionaryFromDateComponents:(id)a0;
+ (id)exsUTCCalendar;
+ (id)itemPropertiesFromData:(id)a0;

- (BOOL)boolForKey:(id)a0 dictionary:(id)a1;
- (id)dataFromProperties;
- (id)dateComponentsForKey:(id)a0 dictionary:(id)a1;
- (id)dateForKey:(id)a0 dictionary:(id)a1;
- (long long)integerForKey:(id)a0 dictionary:(id)a1;
- (BOOL)propertySpecifiedForKey:(id)a0 dictionary:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setDate:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setDateComponents:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setInteger:(long long)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setObjectValue:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setString:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setTimeInterval:(double)a0 forKey:(id)a1 dictionary:(id)a2;
- (void)setTimeZone:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (id)stringForKey:(id)a0 dictionary:(id)a1;
- (double)timeIntervalForKey:(id)a0 dictionary:(id)a1;
- (id)timeZoneForKey:(id)a0 dictionary:(id)a1;

@end
