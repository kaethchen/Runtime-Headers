@class NSUUID, NSString, NSDate, NSPredicate, NSSet, NSArray, CKDeviceToDeviceShareInvitationToken, MKFOutgoingInvitationDatabaseID, Protocol, _MKFHome, NSNumber, _MKFUser;
@protocol MKFHome, MKFUser;

@interface _MKFOutgoingInvitation : _MKFInvitation <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFOutgoingInvitation, MKFOutgoingInvitationPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (retain, nonatomic) NSSet *allowedAccessories_;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFUser *pendingUser;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFUser> pendingUser;
@property (readonly, retain, nonatomic) NSArray *allowedAccessories;
@property (readonly, copy, nonatomic) MKFOutgoingInvitationDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *weekDayScheduleRules;
@property (readonly, retain, nonatomic) NSArray *yearDayScheduleRules;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)restrictedGuestSchedule;
- (void)removeAllowedAccessoriesObject:(id)a0;
- (void)addAllowedAccessoriesObject:(id)a0;
- (id)allowedAccessoryUUIDs;
- (id)castIfOutgoingInvitation;
- (id)createAllowedAccessoriesRelationOfType:(id)a0 modelID:(id)a1;
- (id)createAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)a0;
- (id)createAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)a0;
- (id)createAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)a0;
- (id)findAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)a0;
- (id)findAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)a0;
- (id)findAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)a0;
- (id)materializeOrCreateAllowedAccessoriesRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateAllowedAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateAllowedAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateAllowedAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (BOOL)populateWorkingStoreFromRestrictedGuestSchedule:(id)a0;

@end
