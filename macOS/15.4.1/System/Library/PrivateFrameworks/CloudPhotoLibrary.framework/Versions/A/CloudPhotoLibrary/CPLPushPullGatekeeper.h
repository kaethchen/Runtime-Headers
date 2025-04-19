@class CPLEngineStore;

@interface CPLPushPullGatekeeper : NSObject

@property (readonly, weak, nonatomic) CPLEngineStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (long long)checkPushedChange:(id)a0;

@end
