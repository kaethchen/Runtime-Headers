@class Protocol, NSString, NSNumber, NSUUID, NSDate, _MKFActionSet, MKFNotificationRegistrationActionSetDatabaseID;
@protocol MKFGuest, MKFUser, MKFHome, MKFActionSet;

@interface _MKFNotificationRegistrationActionSet : _MKFNotificationRegistration <MKFNotificationRegistrationActionSet, MKFNotificationRegistrationActionSetPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFActionSet *actionSet;
@property (retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationActionSetDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (retain, nonatomic) id<MKFGuest> guest;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfNotificationRegistrationActionSet;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
