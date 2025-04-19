@class NSString, NSMutableDictionary;

@interface DRSTaskingClientConnectionState : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *procName;
@property (readonly, nonatomic) BOOL hasAdminEntitlement;
@property (readonly, nonatomic) NSMutableDictionary *cachedEntitlements;
@property (readonly, nonatomic) NSString *stateDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 service:(id)a1;
- (BOOL)hasTeamIDEntitlement:(id)a0 connection:(id)a1;

@end
