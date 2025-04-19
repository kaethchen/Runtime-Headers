@class NSString;

@interface AppStoreKit.JSMediaTokenServiceObject : NSObject <_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_> {
    void /* unknown type, empty encoding */ tokenService;
}

@property (nonatomic, readonly) NSString *tokenString;

- (id)init;
- (void).cxx_destruct;
- (id)refreshToken;
- (void)resetToken;
- (id)overrideToken:(id)a0;

@end
