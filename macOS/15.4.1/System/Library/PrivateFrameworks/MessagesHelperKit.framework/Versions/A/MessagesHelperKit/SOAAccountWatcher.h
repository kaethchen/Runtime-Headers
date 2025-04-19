@interface SOAAccountWatcher : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_accountChanged:(id)a0;

@end
