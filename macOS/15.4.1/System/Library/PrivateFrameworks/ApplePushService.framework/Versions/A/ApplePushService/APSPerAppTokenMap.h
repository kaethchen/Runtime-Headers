@class NSMutableDictionary;

@interface APSPerAppTokenMap : NSObject {
    NSMutableDictionary *_perAppTokenMap;
    long long _missingTokens;
    BOOL _enumerating;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)removeAllTokens;
- (id)allPerAppTokens;
- (id)tokensForTopic:(id)a0;
- (void)enumerateMissingTokensUsingBlock:(id /* block */)a0;
- (void)enumerateTokensUsingBlock:(id /* block */)a0;
- (void)enumerateTokensWithInfoUsingBlock:(id /* block */)a0;
- (BOOL)flagForTopic:(id)a0 identifier:(id)a1;
- (BOOL)hasMissingTokens;
- (id)identifiersForTopic:(id)a0;
- (id)infoForTopic:(id)a0 identifier:(id)a1;
- (void)removeIdentifier:(id)a0 forTopic:(id)a1;
- (void)setFlag:(BOOL)a0 forTopic:(id)a1 identifier:(id)a2;
- (void)setToken:(id)a0 forInfo:(id)a1;
- (void)setToken:(id)a0 forTopic:(id)a1 identifier:(id)a2;
- (id)tokenForTopic:(id)a0 identifier:(id)a1;
- (id)topics;

@end
