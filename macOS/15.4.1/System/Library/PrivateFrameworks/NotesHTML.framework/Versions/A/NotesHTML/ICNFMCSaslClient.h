@class NSString, NSArray, NSData, NSError;
@protocol ICNFMCAccount;

@interface ICNFMCSaslClient : NSObject {
    char *_userLanguageCode;
    char *_authenticationName;
    char *_authorizationName;
    struct sasl_secret { unsigned long long x0; unsigned char x1[1]; } *_password;
    char *_authenticationPersonID;
    char *_authorizationPersonID;
    char *_appleToken;
    char *_machineID;
    char *_oneTimePassword;
    char *_clientInfo;
    char *_googleToken;
    char *_oauthToken;
}

@property (copy, nonatomic) NSString *selectedMechanismName;
@property (nonatomic) long long saslStatus;
@property (retain, nonatomic) NSError *saslError;
@property (nonatomic) unsigned int encryptionBufferSize;
@property (copy, nonatomic) NSArray *mechanismNames;
@property (readonly, nonatomic) struct sasl_callback { unsigned long long x0; void /* function */ *x1; void *x2; } *callbacks;
@property (readonly, nonatomic) struct sasl_conn { } *saslConnection;
@property (nonatomic) BOOL mechanismUsesPlainText;
@property (nonatomic) BOOL lastResponseIncludesCredential;
@property (weak, nonatomic) id<ICNFMCAccount> account;
@property (nonatomic) BOOL excludeAuthorizationName;
@property (readonly, nonatomic) BOOL lastResponseIncludesPlainTextCredential;
@property (readonly, copy, nonatomic) NSData *serverErrorResponse;

+ (id)keyPathsForValuesAffectingLastResponseIncludesPlainTextCredential;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_clearAuthenticationCallbackBuffers;
- (void)_handleGenericError:(int)a0 description:(id)a1;
- (void)_handleNeedsUserInteraction:(struct sasl_interact { unsigned long long x0; char *x1; char *x2; char *x3; void *x4; unsigned int x5; } *)a0;
- (void)_handleStartFailure:(int)a0;
- (BOOL)_logGenericError:(int)a0 saslConnection:(struct sasl_conn { } *)a1 description:(id)a2 error:(id *)a3;
- (void)_retrieveEncryptionBufferSize;
- (id)newDecryptedDataForBytes:(const char *)a0 length:(unsigned int)a1;
- (id)newEncryptedDataForBytes:(const char *)a0 length:(unsigned int)a1;
- (id)responseForServerData:(id)a0;
- (id)initWithMechanismNames:(id)a0 account:(id)a1 externalSecurityLayer:(unsigned int)a2 allowPlainText:(BOOL)a3;
- (id)startAndReturnInitialResponse:(BOOL)a0;

@end
