@class HMDIDSFirewallManagerContext, NSArray, NSString;

@interface HMDIDSFirewallManager : HMFObject <HMFLogging>

@property (readonly) HMDIDSFirewallManagerContext *context;
@property (readonly, copy) NSArray *userIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)firewallEntriesForUserIDs:(id)a0;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)addFireWallEntryForUserIDs:(id)a0;
- (void)handleDidAddHome;
- (void)handleDidAddUserWithUserID:(id)a0;
- (void)handleDidAddUserWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)handleDidRemoveHome;
- (void)handleDidRemoveUser;
- (void)replaceFireWallEntriesWithUserIDs:(id)a0;

@end
