@class NSString, NSDictionary, NSXPCConnection, NSObject, NSUserDefaults;
@protocol OS_os_log;

@interface _GDSManager : NSObject

@property (retain, nonatomic) NSDictionary *currentMarginalForecast;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *locBundlePath;
@property (retain, nonatomic) NSUserDefaults *fakeDataDefaults;

+ (id)managerWithID:(id)a0 locationBundlePath:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)getFakeMarginalEmissionForecast;
- (void)unSetFakeSecret;
- (id)carbonIntensityHistoryForBA:(id)a0 from:(id)a1 to:(id)a2;
- (void)fixMarginalEmissionForecast:(id)a0;
- (id)initWithID:(id)a0 locationBundlePath:(id)a1;
- (id)latestBalancingAuthority;
- (id)latestBalancingAuthorityWithError:(id *)a0;
- (id)latestMarginalEmissionForecast;
- (void)registerClientID:(id)a0 locationBundlePath:(id)a1;
- (void)setFakeConfigURL:(id)a0;
- (void)setFakeSecret:(id)a0;
- (void)setFakeSecretVersion:(id)a0;
- (void)setFakeServerURL:(id)a0;
- (void)triggerBAUpdateWithHandler:(id /* block */)a0;
- (void)unFixMarginalEmissionForecast;
- (void)unSetFakeConfigURL;
- (void)unSetFakeSecretVersion;
- (void)unSetFakeServerURL;

@end
