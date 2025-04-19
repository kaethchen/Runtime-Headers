@class NSString, NSDictionary, NSURL, AMSProcessInfo;

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _authenticationType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long allowPasswordGeneration;
@property BOOL allowSecondaryCredentialSource;
@property (retain) NSString *companionDeviceClientInfo;
@property (retain) NSString *companionDeviceUDID;
@property (getter=isDemoAccountSetup) BOOL demoAccountSetup;
@property BOOL ephemeral;
@property (retain) NSString *metricsIdentifier;
@property (readonly) NSDictionary *optionsDictionaryForLogging;
@property (copy) NSString *passwordlessToken;
@property long long serviceType;
@property (readonly, getter=isRemoteProxyAuthentication) BOOL remoteProxyAuthentication;
@property (retain) NSString *serviceIdentifier;
@property BOOL allowServerDialogs;
@property unsigned long long authenticationType;
@property (copy) NSString *appProvidedContext;
@property (copy) NSDictionary *appProvidedData;
@property (retain) NSString *cancelButtonString;
@property BOOL canMakeAccountActive;
@property (retain) NSDictionary *createAccountQueryParams;
@property (retain) AMSProcessInfo *clientInfo;
@property unsigned long long credentialSource;
@property (retain) NSString *debugReason;
@property (retain) NSString *defaultButtonString;
@property (retain) NSString *delegateAuthChallenge;
@property BOOL delegateAuthEnabled;
@property BOOL enableAccountCreation;
@property (retain) NSDictionary *HTTPHeaders;
@property (retain) NSURL *iconBundleURL;
@property BOOL ignoreAccountConversion;
@property BOOL forceSyncToPairedWatch;
@property (retain) NSString *logKey;
@property unsigned long long multiUserAuthentication;
@property (retain) NSString *promptTitle;
@property (retain) NSString *proxyAppBundleID;
@property (retain) NSString *proxyAppName;
@property (retain) NSString *reason;
@property (retain) NSString *userAgent;
@property (retain) NSString *userAgentSuffix;
@property BOOL usernameEditable;
@property BOOL serviceTokenOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)presentingViewController;
- (id)mediaType;
- (void)setMediaType:(id)a0;
- (id)optionsDictionary;
- (void)setPresentingViewController:(id)a0;
- (void)setAuthKitData:(id)a0;
- (id)authKitData;
- (id)initWithOptionsDictionary:(id)a0;
- (id)optionsDictionaryForRemoteProxyAuthentication;

@end
