@interface LNSpotlightCascadeBridge : NSObject

+ (void)deleteItems:(id)a0 bundleIdentifier:(id)a1 version:(unsigned long long)a2 validity:(id)a3 completionHandler:(id /* block */)a4;
+ (void)donateItems:(id)a0 bundleIdentifier:(id)a1 version:(unsigned long long)a2 validity:(id)a3 completionHandler:(id /* block */)a4;
+ (void)donateItems:(id)a0 bundleIdentifier:(id)a1 version:(unsigned long long)a2 validity:(id)a3 shouldContinue:(id /* block */)a4 completionHandler:(id /* block */)a5;

@end
