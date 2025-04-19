@class NSDictionary, NSString;
@protocol IDSKeyTransparencyManagerDelegate;

@interface IDSKeyTransparencyManager : NSObject <IDSXPCKeyTransparencyManagerClient>

@property (retain, nonatomic) NSDictionary *applicationToVerificationInfoProviders;
@property (retain, nonatomic) NSString *uuid;
@property (weak, nonatomic) id<IDSKeyTransparencyManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)getKeyTransparencyOptInEligiblityForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)_setupXPC:(BOOL)a0;
- (void)cacheClearRequest:(id)a0;
- (void)fetchKTRegistrationStatusWithCompletion:(id /* block */)a0;
- (void)getCurrentRegistrationState:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleRegistrationStateUpdate:(id)a0;
- (void)peerVerificationFinishedWithResults:(id)a0;
- (void)registrationDataNeedsUpdate;
- (void)registrationMightNeedUpdate:(id)a0;
- (void)sendOptInUpdateForApplications:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendOptInUpdateForApplicationsOptInState:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendOptInUpdateRequest:(id)a0 withCompletion:(id /* block */)a1;
- (id)verificationInfoProviderForApplication:(id)a0;
- (id)verificationInfoProviderIdForApplication:(id)a0;

@end
