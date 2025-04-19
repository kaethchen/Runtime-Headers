@class NSData, NSString, NSArray, ASWebAuthenticationSessionController, NSSet, NSUUID, NSURL, NSDictionary, ASWebAuthenticationSessionCallback;
@protocol ASWebAuthenticationSessionRequestDelegate;

@interface ASWebAuthenticationSessionRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) ASWebAuthenticationSessionController *controller;
@property (readonly, nonatomic) NSSet *requestingAppSupportedSchemes;
@property (nonatomic) BOOL shouldForceiOSUserAgent;
@property (readonly, nonatomic) BOOL jitEnabled;
@property (retain, nonatomic) NSData *callerAuditTokenData;
@property (retain, nonatomic) NSArray *customAnchorCertificatesData;
@property (nonatomic) BOOL shouldFailOnMDMProfileErrorResponse;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *callbackURLScheme;
@property (readonly, nonatomic) BOOL shouldUseEphemeralSession;
@property (weak, nonatomic) id<ASWebAuthenticationSessionRequestDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *additionalHeaderFields;
@property (readonly, nonatomic) ASWebAuthenticationSessionCallback *callback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancelWithError:(id)a0;
- (void)completeWithCallbackURL:(id)a0;
- (id)initWithUUID:(id)a0 URL:(id)a1 callback:(id)a2 shouldUseEphemeralSession:(BOOL)a3 jitEnabled:(BOOL)a4 requestingAppSupportedSchemes:(id)a5 additionalHeaderFields:(id)a6 customAnchorCertificatesData:(id)a7 shouldFailOnMDMProfileErrorResponse:(BOOL)a8;

@end
