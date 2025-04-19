@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (BOOL)canCommitSelf;
+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)uuid;
- (id)address;
- (id)title;
- (double)latitude;
- (double)longitude;
- (double)radius;
- (int)referenceFrame;
- (id)mapKitHandle;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;
- (id)_structuredLocation;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)remObjectID;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedStructuredLocation;

@end
