@class Protocol, _MKFCharacteristic, NSString, NSUUID, MKFNotificationRegistrationCharacteristicDatabaseID, NSNumber, NSDate;
@protocol MKFGuest, MKFCharacteristic, MKFUser, MKFHome;

@interface _MKFNotificationRegistrationCharacteristic : _MKFNotificationRegistration <MKFNotificationRegistrationCharacteristic, MKFNotificationRegistrationCharacteristicPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *lastNotifiedValue;
@property (copy, nonatomic) NSNumber *notificationThreshold;
@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (copy, nonatomic) NSNumber *lastNotifiedValue;
@property (copy, nonatomic) NSNumber *notificationThreshold;
@property (retain, nonatomic) id<MKFCharacteristic> characteristic;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;
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

- (id)castIfNotificationRegistrationCharacteristic;

@end
