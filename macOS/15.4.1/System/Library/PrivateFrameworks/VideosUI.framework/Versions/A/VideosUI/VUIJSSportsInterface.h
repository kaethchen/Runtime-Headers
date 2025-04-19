@class VUIJSSportsJavascriptInterface;

@interface VUIJSSportsInterface : VUIJSObject <VUIJSSportsInterface> {
    VUIJSSportsJavascriptInterface *_implementation;
}

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (id)checkActivityExists:(id)a0;
- (id)getTierType:(id)a0;
- (id)isPlayByPlayEnabled:(id)a0;
- (id)isSportsFeatureEnabled:(id)a0 :(id)a1;
- (id)registerForSportsCanonical:(id)a0 :(id)a1 :(id)a2;

@end
