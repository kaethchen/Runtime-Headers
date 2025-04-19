@class CRKASMRosterProviderConfiguration;
@protocol CRKASMRosterProviding;

@interface CRKASMEasyMAIDSignInRosterProvider : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;
@property (readonly, nonatomic) id /* block */ providerGenerator;
@property (readonly, nonatomic) id<CRKASMRosterProviding> instructorRosterProviderWithoutKeychain;

- (void).cxx_destruct;
- (void)fetchEligibilityForEasyMAIDSignInWithCompletion:(id /* block */)a0;
- (id)initWithRosterProviderGenerator:(id /* block */)a0;
- (BOOL)isEasyStudentSignInDisabledByServer;

@end
