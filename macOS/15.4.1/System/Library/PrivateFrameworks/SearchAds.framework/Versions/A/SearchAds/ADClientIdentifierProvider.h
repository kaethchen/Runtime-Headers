@interface ADClientIdentifierProvider : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ identiferCache;
    void /* unknown type, empty encoding */ xpcRequester;
}

- (id)init;
- (void).cxx_destruct;
- (id)getIdentifiersWithType:(long long)a0;

@end
