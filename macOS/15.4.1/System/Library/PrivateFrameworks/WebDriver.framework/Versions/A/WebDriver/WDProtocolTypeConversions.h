@interface WDProtocolTypeConversions : NSObject

+ (void)_parseErrorMessage:(id *)a0 fromPayload:(id)a1;
+ (void)_parseAuthenticatorProtocol:(id *)a0 fromPayload:(id)a1;
+ (void)_parseAuthenticatorTransport:(id *)a0 fromPayload:(id)a1;
+ (void)_parseBrowsingContext:(id *)a0 fromPayload:(id)a1;
+ (void)_parseBrowsingContextHandle:(id *)a0 fromPayload:(id)a1;
+ (void)_parseBrowsingContextPresentation:(id *)a0 fromPayload:(id)a1;
+ (void)_parseCookie:(id *)a0 fromPayload:(id)a1;
+ (void)_parseCookieSameSitePolicy:(id *)a0 fromPayload:(id)a1;
+ (void)_parseCoordinateSystem:(id *)a0 fromPayload:(id)a1;
+ (void)_parseFrameHandle:(id *)a0 fromPayload:(id)a1;
+ (void)_parseInputSource:(id *)a0 fromPayload:(id)a1;
+ (void)_parseInputSourceState:(id *)a0 fromPayload:(id)a1;
+ (void)_parseInputSourceType:(id *)a0 fromPayload:(id)a1;
+ (void)_parseInteractionStep:(id *)a0 fromPayload:(id)a1;
+ (void)_parseKeyModifier:(id *)a0 fromPayload:(id)a1;
+ (void)_parseKeyboardInteraction:(id *)a0 fromPayload:(id)a1;
+ (void)_parseKeyboardInteractionType:(id *)a0 fromPayload:(id)a1;
+ (void)_parseMouseButton:(id *)a0 fromPayload:(id)a1;
+ (void)_parseMouseInteraction:(id *)a0 fromPayload:(id)a1;
+ (void)_parseMouseMoveOrigin:(id *)a0 fromPayload:(id)a1;
+ (void)_parseNodeHandle:(id *)a0 fromPayload:(id)a1;
+ (void)_parsePageLoadStrategy:(id *)a0 fromPayload:(id)a1;
+ (void)_parsePoint:(id *)a0 fromPayload:(id)a1;
+ (void)_parsePrimitive:(id *)a0 fromPayload:(id)a1;
+ (void)_parseRect:(id *)a0 fromPayload:(id)a1;
+ (void)_parseSessionPermission:(id *)a0 fromPayload:(id)a1;
+ (void)_parseSessionPermissionData:(id *)a0 fromPayload:(id)a1;
+ (void)_parseSize:(id *)a0 fromPayload:(id)a1;
+ (void)_parseVirtualAuthenticatorConfiguration:(id *)a0 fromPayload:(id)a1;
+ (void)_parseVirtualAuthenticatorCredential:(id *)a0 fromPayload:(id)a1;
+ (void)_parseVirtualKey:(id *)a0 fromPayload:(id)a1;
+ (void)_parseWebExtensionResourceOptions:(id *)a0 fromPayload:(id)a1;

@end
