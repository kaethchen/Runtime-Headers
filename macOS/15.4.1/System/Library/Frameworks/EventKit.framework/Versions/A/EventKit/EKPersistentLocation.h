@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setTitle:(id)a0;
- (id)address;
- (id)title;
- (void)setAddress:(id)a0;
- (id)latitude;
- (id)longitude;
- (void)setLatitude:(id)a0;
- (void)setLongitude:(id)a0;
- (id)radius;
- (id)referenceFrame;
- (void)setReferenceFrame:(id)a0;
- (void)setRadius:(id)a0;
- (id)mapKitHandle;
- (int)entityType;
- (id)routing;
- (void)setMapKitHandle:(id)a0;
- (void)setRouting:(id)a0;
- (void)setDerivedFrom:(id)a0;
- (id)alarmOwner;
- (id)calendarItemOwner;
- (id)contactLabel;
- (id)derivedFrom;
- (id)semanticIdentifier;
- (void)setAlarmOwner:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (void)setContactLabel:(id)a0;

@end
