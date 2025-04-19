@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)count;
- (void)setOwner:(id)a0;
- (id)UUID;
- (id)endDate;
- (long long)interval;
- (void)setCount:(unsigned long long)a0;
- (void)setInterval:(long long)a0;
- (id)specifier;
- (id)owner;
- (void)setUUID:(id)a0;
- (void)setEndDate:(id)a0;
- (int)entityType;
- (id)cachedEndDate;
- (id)cachedEndDateTimeZone;
- (long long)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (void)setCachedEndDate:(id)a0;
- (void)setCachedEndDateTimeZone:(id)a0;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (void)setFrequencyRaw:(int)a0;
- (void)setSpecifier:(id)a0;

@end
