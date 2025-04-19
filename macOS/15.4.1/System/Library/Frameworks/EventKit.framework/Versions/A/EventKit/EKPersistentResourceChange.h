@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)calendar;
- (id)timestamp;
- (unsigned int)changeType;
- (id)notification;
- (id)calendarItem;
- (id)updateCount;
- (int)entityType;
- (unsigned int)changedProperties;
- (BOOL)alerted;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
