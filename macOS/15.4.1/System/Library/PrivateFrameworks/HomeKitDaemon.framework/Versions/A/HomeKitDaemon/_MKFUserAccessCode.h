@class NSUUID, NSString, NSDate, NSPredicate, _MKFGuest, Protocol, _MKFUser, MKFUserAccessCodeDatabaseID;
@protocol MKFUser, MKFHome, MKFGuest;

@interface _MKFUserAccessCode : _MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserAccessCode, MKFUserAccessCodePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _MKFGuest *guest;
@property (retain, nonatomic) _MKFUser *user;
@property (retain, nonatomic) id<MKFGuest> guest;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFUserAccessCodeDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfUserAccessCode;

@end
