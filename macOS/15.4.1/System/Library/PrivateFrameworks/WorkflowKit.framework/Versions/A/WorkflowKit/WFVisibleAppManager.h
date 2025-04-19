@interface WFVisibleAppManager : NSObject

- (id)init;
- (void)getCurrentAppWithCompletionHandler:(id /* block */)a0;
- (void)getVisibleAppsWithCompletionHandler:(id /* block */)a0;

@end
