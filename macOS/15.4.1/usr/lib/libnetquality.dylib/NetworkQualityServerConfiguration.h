@interface NetworkQualityServerConfiguration : NSObject

@property (nonatomic) unsigned int httpProtocol;
@property (nonatomic) int listenPort;
@property (nonatomic) unsigned int idleTimeoutSeconds;
@property (nonatomic) BOOL tlsEnabled;
@property (nonatomic) BOOL bonjourEnabled;
@property (nonatomic) BOOL mirrorServerIP;
@property (nonatomic) BOOL l4sEnabled;
@property unsigned long long networkServiceType;

+ (unsigned int)defaultIdleTimeout;

- (id)init;

@end
