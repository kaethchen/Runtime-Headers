@class NSString, NSURL, NSNumber;

@interface ASTEnvironment : NSObject

@property (retain, nonatomic) NSString *diagsChannel;
@property (retain, nonatomic) NSString *configCode;
@property (retain, nonatomic) NSURL *assetURL;
@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long server;
@property (retain, nonatomic) NSURL *serverURL;
@property (readonly, nonatomic) BOOL isDiagnosticsMode;
@property (retain, nonatomic) NSString *SOCKSProxyServer;
@property (retain, nonatomic) NSNumber *SOCKSProxyPort;

+ (BOOL)isInternalBuild;
+ (id)protocolVersion;
+ (id)currentEnvironment;
+ (id)environmentWithEnvironmentType:(unsigned long long)a0;
+ (BOOL)isServicePart;
+ (void)resetEnvironment;

- (id)init;
- (void).cxx_destruct;
- (id)_defaultServerURL;
- (unsigned long long)_defaultServerSelection;
- (id)_generateServerURL;
- (id)environmentServerString;
- (id)initWithEnvironmentType:(unsigned long long)a0;

@end
