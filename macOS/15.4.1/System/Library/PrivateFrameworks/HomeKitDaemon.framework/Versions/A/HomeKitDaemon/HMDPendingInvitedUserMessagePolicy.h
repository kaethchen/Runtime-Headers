@class HMDHomeManager;

@interface HMDPendingInvitedUserMessagePolicy : HMFMessagePolicy

@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;

@end
