@class AKServerRequestConfiguration, AKCommandLineUtilities, AKAppleIDAuthenticationCommandLineContext;

@interface AKAccountRecoveryModel : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationCommandLineContext *context;
@property (retain, nonatomic) AKServerRequestConfiguration *configuration;
@property (retain, nonatomic) AKCommandLineUtilities *cliUtilities;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 configuration:(id)a1 utilities:(id)a2;

@end
