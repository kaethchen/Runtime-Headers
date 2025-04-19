@class SFAuthorizationPluginView;

@interface AuthorizationSpecialEngineRef : NSObject {
    struct __OpaqueAuthorizationEngine { } *mEngineRef;
    SFAuthorizationPluginView *mAuthPluginView;
}

@end
