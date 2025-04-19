@interface DDDiscoverySession : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (void)reportEvent:(id)a0;

@end
