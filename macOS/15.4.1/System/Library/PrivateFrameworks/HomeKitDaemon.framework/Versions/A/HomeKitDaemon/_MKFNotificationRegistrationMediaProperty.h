@class Protocol, NSUUID, NSString, _MKFAccessory, NSDate, MKFNotificationRegistrationMediaPropertyDatabaseID, NSNumber;
@protocol MKFGuest, MKFAccessory, MKFUser, MKFHome;

@interface _MKFNotificationRegistrationMediaProperty : _MKFNotificationRegistration <MKFNotificationRegistrationMediaProperty, MKFNotificationRegistrationMediaPropertyPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *mediaProfileIdentifier;
@property (copy, nonatomic) NSString *mediaProperty;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (copy, nonatomic) NSUUID *mediaProfileIdentifier;
@property (copy, nonatomic) NSString *mediaProperty;
@property (retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationMediaPropertyDatabaseID *databaseID;
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

- (id)castIfNotificationRegistrationMediaProperty;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
