@class NSString, OSPRequest, NSError;

@interface OSPTelemetry : NSObject

@property (retain) OSPRequest *request;
@property (retain) NSString *client;
@property BOOL isAppleInternal;
@property (retain) NSString *sessionUUID;
@property BOOL multipleVariants;
@property (retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)__submitToInstallerDiagnostics;
- (void)_submitToInstallerDiagnostics;
- (id)_summaryForLogging;
- (id)initWithRequest:(id)a0 multipleVariants:(BOOL)a1;
- (void)submitWithError:(id)a0;

@end
