@class HMRestrictedGuestHomeAccessSettings, HMUserCameraAccess, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl

@property (getter=isOwner) BOOL owner;
@property (nonatomic, getter=isAdministrator) BOOL administrator;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;
@property (getter=isAccessAllowed) BOOL accessAllowed;
@property (nonatomic) unsigned long long accessNotAllowedReasonCode;
@property (getter=isRestrictedGuest) BOOL restrictedGuest;
@property (retain, nonatomic) HMRestrictedGuestHomeAccessSettings *restrictedGuestAccessSettings;
@property (nonatomic, getter=isRestrictedGuestInAllowedPeriod) BOOL restrictedGuestInAllowedPeriod;
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (retain, nonatomic) HMUserCameraAccess *camerasAccess;
@property (getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateAccessForUser:(id)a0 restrictedGuestAccessSettings:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)camerasAccessLevel;
- (id)initWithUser:(id)a0 allowAccess:(BOOL)a1 owner:(BOOL)a2 administratorPrivilege:(BOOL)a3 remoteAccess:(BOOL)a4 presenceAuthStatus:(id)a5 presenceComputeStatus:(id)a6 announceAccess:(BOOL)a7 camerasAccess:(id)a8 restrictedGuest:(BOOL)a9 restrictedGuestAccessSettings:(id)a10;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (void)setUserAccessSettings:(id)a0;
- (void)updateAdministratorAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateAnnounceAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateCamerasAccessLevel:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateRemoteAccess:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateRestrictedGuestSchedule:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateRestrictedGuestSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
