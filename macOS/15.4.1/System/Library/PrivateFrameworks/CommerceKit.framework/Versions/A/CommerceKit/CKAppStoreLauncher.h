@class NSMutableDictionary;

@interface CKAppStoreLauncher : NSObject {
    NSMutableDictionary *_validURLs;
}

+ (id)sharedInstance;
+ (void)validateLaunchURL:(id)a0 withResultBlock:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_validateLaunchURL:(id)a0;
- (void)launchAppStoreWithURL:(id)a0;

@end
