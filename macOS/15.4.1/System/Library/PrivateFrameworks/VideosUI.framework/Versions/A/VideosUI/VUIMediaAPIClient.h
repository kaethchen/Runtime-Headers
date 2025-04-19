@class AMSMediaTokenService, AMSURLSession, NSString;

@interface VUIMediaAPIClient : NSObject

@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) AMSMediaTokenService *tokenService;
@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)sharedInstance;
+ (id)getPlatformClientIdentifier;
+ (void)initializeWithAppleTVClientIdentifier;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (id)_createSession;
- (id)_createTokenServiceWithSession:(id)a0;
- (void)fetchContentForUrl:(id)a0 completion:(id /* block */)a1;

@end
