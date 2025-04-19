@class GKLimitedPresentationConfig, GKLimitedPresentationContext;

@interface GKLimitedPresentationManager : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ defaultsKey;
    void /* unknown type, empty encoding */ count;
    void /* unknown type, empty encoding */ lastAppearanceDate;
    void /* unknown type, empty encoding */ exceededFirstLimit;
}

- (id)init;
- (void)resetWithCompletionHandler:(void (^)(void))a0;
- (id)initWithDefaultsKey:(id)a0;
- (void)didPresentWithCompletionHandler:(void (^)(void))a0;
- (void)presentationDisabledWithConfig:(GKLimitedPresentationConfig *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)presentationDisabledWithConfig:(GKLimitedPresentationConfig *)a0 context:(GKLimitedPresentationContext *)a1 completionHandler:(void (^)(BOOL))a2;

@end
