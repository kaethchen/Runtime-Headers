@interface BTMBackgroundTaskManager : NSObject

+ (id)sharedInstance;

- (id)_init;
- (void)setPromptingEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)canLoadLaunchdJobWithURL:(id)a0 completion:(id /* block */)a1;
- (void)canLoadLaunchdJobWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)canLoadServiceLoginItemWithURL:(id)a0 completion:(id /* block */)a1;
- (void)canLoadServiceLoginItemWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)getPromptingEnabledWithCompletion:(id /* block */)a0;
- (void)openLoginItemsWithCompletion:(id /* block */)a0;

@end
