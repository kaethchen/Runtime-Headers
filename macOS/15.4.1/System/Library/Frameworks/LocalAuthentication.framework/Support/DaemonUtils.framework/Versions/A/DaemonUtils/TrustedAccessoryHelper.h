@interface TrustedAccessoryHelper : NSObject

+ (id)sharedInstance;

- (BOOL)_checkPairingState:(long long)a0 device:(id)a1 error:(id *)a2;
- (BOOL)_checkPairingStateIn:(id)a0 device:(id)a1 error:(id *)a2;
- (BOOL)_isConnectedDeviceInState:(long long)a0 description:(id)a1 error:(id *)a2;
- (BOOL)_isConnectedDeviceInStates:(id)a0 description:(id)a1 error:(id *)a2;
- (BOOL)authorizeDevice:(id)a0 externalizedContext:(id)a1 error:(id *)a2;
- (id)connectedDevicesWithError:(id *)a0;
- (id)deviceManagerWithError:(id *)a0;
- (BOOL)isAuthorizedDeviceConnectedWithError:(id *)a0;
- (BOOL)isPairedDeviceConnectedWithError:(id *)a0;
- (BOOL)isTrustedAccessorySupported;
- (BOOL)isUnauthorizedDeviceConnectedWithError:(id *)a0;
- (id)unauthorizedDeviceWithUid:(id)a0 error:(id *)a1;

@end
