@class SMNServiceManager, NSString, NSTask, AWDLServiceDiscoveryManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMNWirelessController : NSObject

@property BOOL hostingAP;
@property BOOL connectedToAP;
@property BOOL hostingDedicatedAP;
@property (retain) NSString *accessPointSSID;
@property (retain) NSString *accessPointPassword;
@property (retain) NSString *currentWirelessSSID;
@property (retain) NSString *currentWirelessBSSID;
@property (retain) NSString *previousWirelessConfigurationUUID;
@property (retain) NSMutableArray *delegates;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property struct __IPConfigurationService { } *ipConfigService;
@property (retain) NSTask *bootpdTask;
@property (retain) SMNServiceManager *bootpdServiceManager;
@property (retain) AWDLServiceDiscoveryManager *awdlTrafficRegistrationManager;
@property BOOL attemptingWirelessSwitch;
@property BOOL use2GHz;

+ (id)sharedController;
+ (id)wirelessErrorWithCode:(unsigned long long)a0;
+ (id)wirelessErrorWithCode:(unsigned long long)a0 userInfo:(id)a1;
+ (id)stringForOPMode:(long long)a0;
+ (id)stringForPHYMode:(unsigned long long)a0;
+ (id)stringForSecurityType:(unsigned long long)a0;
+ (id)wirelessErrorWithCode:(unsigned long long)a0 underlyingError:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)disassociate;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (id)supportedChannels;
- (void)stopAccessPoint;
- (void)notifyDelegatesDidAttemptNetworkSwitch:(BOOL)a0;
- (void)notifyDelegatesWillAttemptNetworkSwitch:(long long)a0;
- (id)randomAcessPointPassword;
- (id)randomAcessPointSSID;
- (BOOL)startAccessPointWithName:(id)a0 password:(id)a1 supportedChannels:(id)a2 error:(id *)a3;
- (BOOL)startDedicatedAccessPointWithError:(id *)a0;
- (void)stopDedicatedAccessPointAndJoinPreviousNetwork:(BOOL)a0;
- (void)_stopAccessPointAndJoinPreviousNetwork:(BOOL)a0;
- (id)appropriateChannelForInterface:(id)a0 supportedChannels:(id)a1;
- (id)appropriateWirelessClientInterface;
- (id)appropriateWirelessSoftAPInterface;
- (BOOL)associateWithNetwork:(id)a0 password:(id)a1 security:(unsigned long long)a2 error:(id *)a3;
- (BOOL)attemptToAssociateWithNetwork:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)attemptToAssociateWithNetwork:(id)a0 password:(id)a1 timeout:(unsigned long long)a2 retryDelay:(unsigned long long)a3 error:(id *)a4;
- (id)bootpPlistValues;
- (void)bootpdCleanup;
- (id)channelForDedicatedAccessPoint;
- (id)dedicatedAccessPointSSID;
- (void)printWirelessInformation;
- (void)restoreWirelessConfiguration;
- (void)saveWirelessConfiguration;
- (id)sha256HashOfString:(id)a0;
- (BOOL)startAccessPointWithName:(id)a0 password:(id)a1 channel:(id)a2 error:(id *)a3;
- (BOOL)startAccessPointWithName:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)startDHCP;
- (BOOL)startIPServiceUsingLinkLocalIPv4:(BOOL)a0;
- (void)stopDHCP;
- (BOOL)stopIPService;
- (void)temporarilyDisableAutoJoin;
- (void)updateAWDLTrafficRegistrationStatus:(BOOL)a0 forRemoteMACAddress:(id)a1;
- (void)updateCurrentWirelessSSID;
- (id)wirelessChannelInterface:(id)a0 channelNumber:(int)a1 frequencyBand:(long long)a2 channelWidth:(long long)a3;
- (id)wirelessInformation;

@end
