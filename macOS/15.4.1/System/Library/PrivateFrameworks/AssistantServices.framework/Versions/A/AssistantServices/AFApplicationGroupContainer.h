@interface AFApplicationGroupContainer : NSObject

+ (id)sharedInstance;

- (void)sharedApplicationGroupURL:(id /* block */)a0;
- (void)sharedApplicationGroupURLOnQueue:(id)a0 WithCompletion:(id /* block */)a1;

@end
