@interface VideosUI.VUIJetPackController : NSObject {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ location;
}

+ (id)controllerWithBagKey:(id)a0 defaults:(id)a1 urlOverrideDefaultKey:(id)a2;
+ (id)controllerWithBagKey:(id)a0 defaults:(id)a1 urlOverrideDefaultKey:(id)a2 withCachePolicy:(unsigned long long)a3;

- (id)init;
- (void).cxx_destruct;
- (id)getJetPackSource;
- (id)getJetPackURL;

@end
