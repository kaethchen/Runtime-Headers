@class NSString, NSError;

@interface PCCServerEnvironment : NSObject

- (id)init;
- (void)selectedEnvironmentNameWithCompletionHandler:(void (^)(NSString *, NSError *))a0;

@end
