@interface SUMacControllerAuthentication : NSObject

+ (id)_appIDForHostname:(id)a0;
+ (id)_fallbackWestgateToken;
+ (id)_hostnameForAssetType:(id)a0;
+ (id)_serviceIDForHostname:(id)a0;
+ (id)appleConnectSSOToken;
+ (id)authorizationHeaderFetchingDAWTokenForServiceID:(id)a0 appID:(id)a1;
+ (id)authorizationHeaderForAsset:(id)a0 overrides:(id)a1;
+ (id)authorizationHeaderForAssetType:(id)a0 overrides:(id)a1;
+ (id)authorizationHeaderForURL:(id)a0 overrides:(id)a1;

@end
