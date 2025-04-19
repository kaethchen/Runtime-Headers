@class HMUser, NSString, NSUUID, HMHomeManager, NSArray, HMRestrictedGuestHomeAccessSchedule;

@interface HMIncomingHomeInvitation : HMHomeInvitation <HMFObject>

@property (weak, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) HMUser *inviter;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) BOOL homeHasCameras;
@property (readonly, nonatomic, getter=isInviteeRestrictedGuest) BOOL inviteeRestrictedGuest;
@property (readonly, nonatomic) HMRestrictedGuestHomeAccessSchedule *restrictedGuestSchedule;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;
+ (id)incomingHomeInvitationFromEncodedData:(id)a0 homeManager:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 homeManager:(id)a1;
- (void)_unconfigure;
- (void)acceptInviteWithCompletionHandler:(id /* block */)a0;
- (void)acceptInviteWithPresenceAuthStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)cancelInviteWithCompletionHandler:(id /* block */)a0;
- (void)ignoreInviteWithCompletionHandler:(id /* block */)a0;
- (id)initWithInvitationData:(id)a0 homeManager:(id)a1;
- (BOOL)isForPKSharingMessageInvitationWithAppleSharingDict:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)reportJunkInviteWithCompletionHandler:(id /* block */)a0;

@end
