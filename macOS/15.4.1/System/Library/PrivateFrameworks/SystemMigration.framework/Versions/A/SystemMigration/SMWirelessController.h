@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SMWirelessController : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *wirelessNetworkSwitchCancellation;

+ (id)sharedController;

- (void).cxx_destruct;
- (BOOL)attemptAccessPointAssocationWithSystem:(id)a0 error:(id *)a1;
- (BOOL)attemptAccessPointAssocationWithSystem:(id)a0 timeout:(unsigned long long)a1 error:(id *)a2;
- (BOOL)prepareSourceMachine:(id)a0 ssid:(id)a1 password:(id)a2 error:(id *)a3;
- (void)stopWirelessNetworkSwitch;
- (BOOL)waitForReconnection:(id)a0 timeout:(double)a1 error:(id *)a2;

@end
