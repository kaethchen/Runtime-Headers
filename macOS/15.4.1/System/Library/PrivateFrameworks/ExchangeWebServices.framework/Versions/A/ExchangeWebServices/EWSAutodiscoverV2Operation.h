@class NSURLSession, NSString, EWSAutodiscoverV2Response, EWSAutodiscoverKillSwitch, NSError, EWSAutodiscoverV2Binding;

@interface EWSAutodiscoverV2Operation : NSObject <NSURLSessionDataDelegate>

@property (retain, nonatomic) EWSAutodiscoverV2Operation *me;
@property (readonly, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) EWSAutodiscoverV2Response *response;
@property (readonly, nonatomic) EWSAutodiscoverV2Binding *binding;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURLSession *session;
@property (nonatomic) BOOL inProgress;
@property (retain, nonatomic) EWSAutodiscoverKillSwitch *killSwitch;
@property (retain, nonatomic) NSString *protocol;
@property (nonatomic) BOOL retrieveAuthURI;
@property (nonatomic) BOOL isOnPrem;
@property BOOL logsActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)authorizationURIFromHttpHeader:(id)a0;
+ (id)authorizationURIFromHttpHeader:(id)a0 issuer:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_sendAutodiscoverRequest;
- (id)initWithEmailAddress:(id)a0 binding:(id)a1;
- (void)startWithProtocol:(id)a0 retrieveAuthURI:(BOOL)a1;

@end
