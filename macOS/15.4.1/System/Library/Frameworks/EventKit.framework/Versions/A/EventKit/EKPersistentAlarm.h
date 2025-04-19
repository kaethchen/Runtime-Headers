@interface EKPersistentAlarm : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setType:(long long)a0;
- (long long)type;
- (id)UUID;
- (void)setUrlWrapper:(id)a0;
- (id)urlWrapper;
- (void)setUUID:(id)a0;
- (id)externalData;
- (id)emailAddress;
- (void)setEmailAddress:(id)a0;
- (long long)proximity;
- (id)structuredLocation;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (BOOL)isDefaultAlarm;
- (id)originalAlarm;
- (id)relativeOffset;
- (void)setAbsoluteDate:(id)a0;
- (void)setAcknowledgedDate:(id)a0;
- (void)setOriginalAlarm:(id)a0;
- (void)setRelativeOffset:(id)a0;
- (int)entityType;
- (void)setProximity:(long long)a0;
- (void)setStructuredLocation:(id)a0;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (id)semanticIdentifier;
- (void)setCalendarItemOwner:(id)a0;
- (void)setCalendarOwner:(id)a0;
- (void)setExternalData:(id)a0;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)snoozedAlarmsSet;

@end
