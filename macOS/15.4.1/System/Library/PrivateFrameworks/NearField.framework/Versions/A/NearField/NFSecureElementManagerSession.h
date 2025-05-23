@class NSString, NSMutableDictionary;
@protocol NFSecureElementManagerSessionDelegate;

@interface NFSecureElementManagerSession : NFSession <NFSecureElementManagerSessionCallbacks, NFAppletCollection> {
    BOOL _hasApplets;
    NSMutableDictionary *_appletsById;
    id<NFSecureElementManagerSessionDelegate> _delegate;
}

@property (weak) id<NFSecureElementManagerSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (BOOL)deleteAllApplets:(BOOL)a0 error:(id *)a1;
- (BOOL)deleteAllAppletsOfType:(unsigned char)a0 queueConnection:(BOOL)a1 error:(id *)a2;
- (BOOL)deleteApplets:(id)a0 queueServerConnection:(BOOL)a1 error:(id *)a2;
- (id)felicaAppletState:(id)a0 error:(id *)a1;
- (BOOL)getCryptogram:(id *)a0 challengeResponse:(id *)a1;
- (BOOL)getCryptogram:(id *)a0 challengeResponse:(id *)a1 error:(id *)a2;
- (id)getSignedPlatformDataForSeid:(id)a0 error:(id *)a1;
- (id)initWithCallbackQueue:(id)a0;
- (id)performPeerPaymentEnrollment:(id)a0 error:(id *)a1;
- (id)signChallenge:(id)a0 certs:(id *)a1 error:(id *)a2;
- (id)signChallenge:(id)a0 forAID:(id)a1 sigInfo:(id *)a2 error:(id *)a3;
- (id)signChallenge:(id)a0 useOSVersion:(BOOL)a1 signatureInfo:(id *)a2 error:(id *)a3;
- (id)transitAppletState:(id)a0 error:(id *)a1;
- (unsigned int)validateSEPairings:(id *)a0;
- (id)_appletsById;
- (void)_setApplets:(id)a0;
- (BOOL)deleteAllApplets:(BOOL)a0;
- (BOOL)deleteApplets:(id)a0 queueServerConnection:(BOOL)a1;
- (void)didEndUnexpectedly;
- (void)didExitRestrictedMode:(id)a0;
- (BOOL)didExitRestrictedMode:(id)a0 error:(id *)a1;
- (BOOL)disableAuthorizationForApplet:(id)a0 andKey:(id)a1 authorization:(id)a2 error:(id *)a3;
- (BOOL)disableAuthorizationForApplet:(id)a0 andKeys:(id)a1 authorization:(id)a2 error:(id *)a3;
- (BOOL)disableAuthorizationForApplet:(id)a0 authorization:(id)a1;
- (BOOL)disableAuthorizationForApplet:(id)a0 authorization:(id)a1 error:(id *)a2;
- (BOOL)disableAuthorizationForApplets:(id)a0 andKey:(id)a1 authorization:(id)a2 error:(id *)a3;
- (BOOL)disableAuthorizationForApplets:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)disableAuthorizationForPasses:(id)a0 authorization:(id)a1;
- (id)dumpDomain:(unsigned char)a0 forSEID:(id)a1;
- (id)dumpDomain:(unsigned char)a0 forSEID:(id)a1 error:(id *)a2;
- (id)expressAppletIdentifiers;
- (id)expressAppletIdentifiersWithError:(id *)a0;
- (long long)expressModeControlState;
- (long long)expressModeControlState:(id *)a0;
- (BOOL)expressModesEnabled;
- (BOOL)expressModesEnabledWithError:(id *)a0;
- (id)felicaAppletState:(id)a0;
- (long long)getAndResetLPEMCounter:(id *)a0;
- (id)getAttackCounterLogForSEID:(id)a0;
- (id)getAttackCounterLogForSEID:(id)a0 acknowledgeLogs:(BOOL)a1 error:(id *)a2;
- (id)getAttackCounterLogForSEID:(id)a0 error:(id *)a1;
- (BOOL)getAttackLogPresence:(id)a0 error:(id *)a1;
- (id)getExpressPassConfigWithError:(id *)a0;
- (id)getOSUpdateLog;
- (id)getServiceProviderDataForApplet:(id)a0 error:(id *)a1;
- (id)getServiceProviderDataForApplet:(id)a0 publicKey:(id)a1 scheme:(id)a2 error:(id *)a3;
- (BOOL)powerCycleSEID:(id)a0 error:(id *)a1;
- (BOOL)refreshSecureElement:(id)a0;
- (BOOL)refreshSecureElement:(id)a0 error:(id *)a1;
- (BOOL)restoreAuthorizarionForKeys:(id)a0 onApplet:(id)a1 error:(id *)a2;
- (BOOL)restoreAuthorizationForAllAppletsExcept:(id)a0;
- (BOOL)restoreAuthorizationForAllAppletsExcept:(id)a0 error:(id *)a1;
- (unsigned int)runScript:(id)a0 forSEID:(id)a1 results:(id *)a2 lastStatus:(unsigned long long *)a3;
- (unsigned int)runScript:(id)a0 parameters:(id)a1 outputResults:(id *)a2;
- (id)setExpressModesControlState:(long long)a0;
- (BOOL)setExpressModesEnabled:(BOOL)a0;
- (BOOL)setExpressModesEnabled:(BOOL)a0 error:(id *)a1;
- (id)setExpressPassConfig:(id)a0 restoreAuthorization:(BOOL)a1;
- (id)signChallenge:(id)a0 certs:(id *)a1;
- (id)signChallenge:(id)a0 forAID:(id)a1 certs:(id *)a2;
- (id)signChallenge:(id)a0 forAID:(id)a1 certs:(id *)a2 error:(id *)a3;
- (id)signChallenge:(id)a0 useOSVersion:(BOOL)a1 signatureInfo:(id *)a2;
- (id)stateInformation;
- (id)stateInformationWithError:(id *)a0;
- (id)stateInformationWithRedirectInfo:(id)a0 error:(id *)a1;
- (id)stateInformationWithoutFilteringWithError:(id *)a0;
- (id)transceive:(id)a0 forSEID:(id)a1;
- (id)transceive:(id)a0 forSEID:(id)a1 error:(id *)a2;
- (id)transceive:(id)a0 forSEID:(id)a1 toOS:(long long)a2 error:(id *)a3;
- (id)transceive:(id)a0 forSEID:(id)a1 toOS:(long long)a2 secureZeroOut:(BOOL)a3 error:(id *)a4;
- (id)transceiveMultiple:(id)a0 forSEID:(id)a1 error:(id *)a2;
- (id)transceiveMultiple:(id)a0 forSEID:(id)a1 toOS:(long long)a2 error:(id *)a3;
- (id)transceiveMultiple:(id)a0 forSEID:(id)a1 toOS:(long long)a2 secureZeroOut:(BOOL)a3 error:(id *)a4;
- (unsigned int)validateSEPairings:(id *)a0 outSEPairingVersion:(unsigned long long *)a1;

@end
