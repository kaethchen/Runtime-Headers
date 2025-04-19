@class NSString;

@interface ProfileAuthenticationMessage : ProfileMessage <NSCopying>

@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSString *responseProfileID;
@property (copy) NSString *responseAuthorizationToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)bagKey;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)payloadCanBeLogged;
- (id)requiredKeys;

@end
