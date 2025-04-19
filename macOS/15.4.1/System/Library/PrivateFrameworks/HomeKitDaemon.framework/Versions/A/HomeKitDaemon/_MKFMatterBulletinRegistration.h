@class Protocol, NSSet, NSArray, NSString, NSUUID, MKFMatterBulletinRegistrationDatabaseID, NSDate;
@protocol MKFHome, MKFUser, MKFGuest;

@interface _MKFMatterBulletinRegistration : _MKFBulletinRegistration <MKFMatterBulletinRegistration, MKFMatterBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSSet *matterPaths_;
@property (readonly, retain, nonatomic) NSArray *matterPaths;
@property (readonly, copy, nonatomic) MKFMatterBulletinRegistrationDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (retain, nonatomic) id<MKFGuest> guest;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)addMatterPathsObject:(id)a0;
- (id)castIfMatterBulletinRegistration;
- (id)findMatterPathsRelationWithModelID:(id)a0;
- (id)materializeOrCreateMatterPathsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (void)removeMatterPathsObject:(id)a0;

@end
