@interface FileProviderDaemon.ConcreteFPDPurger : NSObject <FPDPurger>

+ (id)sharedPurger;

- (id)init;
- (void)barrierWithCompletionHandler:(id /* block */)a0;
- (void)purgeAndWaitAtUrl:(id)a0;
- (void)purgeAsyncAtUrl:(id)a0;

@end
