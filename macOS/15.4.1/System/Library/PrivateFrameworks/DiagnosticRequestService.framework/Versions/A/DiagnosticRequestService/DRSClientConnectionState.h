@class NSString;

@interface DRSClientConnectionState : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *procName;
@property (readonly, nonatomic) BOOL hasAdminEntitlement;
@property (readonly, nonatomic) NSString *stateDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 service:(id)a1;

@end
