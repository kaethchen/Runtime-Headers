@class NSDictionary;

@interface CSTrialAssetManager : NSObject {
    NSDictionary *_trialClientDict;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;

@end
