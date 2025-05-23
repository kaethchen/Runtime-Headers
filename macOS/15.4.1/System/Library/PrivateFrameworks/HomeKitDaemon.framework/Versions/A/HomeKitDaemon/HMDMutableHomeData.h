@class NSArray, NSUUID, NSString, HMDAccountHandle, HMDAccount, HMDApplicationData;

@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSArray *homes;
@property (copy, nonatomic) NSArray *accessories;
@property (copy, nonatomic) NSUUID *primaryHomeUUID;
@property (copy, nonatomic) NSUUID *lastCurrentHomeUUID;
@property (nonatomic) long long dataVersion;
@property (nonatomic) long long schemaVersion;
@property (nonatomic) long long recoveryVersion;
@property (copy, nonatomic) NSUUID *dataTag;
@property (copy, nonatomic) NSArray *UUIDsOfRemovedHomes;
@property (copy, nonatomic) NSArray *cloudZones;
@property (copy, nonatomic) NSArray *incomingInvitations;
@property (copy, nonatomic) NSString *currentDevice;
@property (copy, nonatomic) NSArray *pendingReasonSaved;
@property (copy, nonatomic) NSArray *pendingUserManagementOperations;
@property (copy, nonatomic) NSArray *unprocessedOperationIdentifiers;
@property (copy, nonatomic) HMDApplicationData *applicationData;
@property (nonatomic) long long residentEnabledState;
@property (retain, nonatomic) HMDAccount *account;
@property (copy, nonatomic) NSArray *remoteAccounts;
@property (copy, nonatomic) HMDAccountHandle *primaryAccountHandle;
@property (nonatomic) BOOL accessAllowedWhenLocked;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
