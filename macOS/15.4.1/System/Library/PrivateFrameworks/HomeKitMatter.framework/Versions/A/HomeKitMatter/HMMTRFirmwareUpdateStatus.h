@class HMFTimer, HAPMatterFirmwareUpdateStatus, HMMTRAccessoryServer, HMMTRAccessoryServerBrowser, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRFirmwareUpdateStatus : NSObject <HMFTimerDelegate>

@property (readonly, weak, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (retain, nonatomic) HAPMatterFirmwareUpdateStatus *localFirmwareUpdateStatus;
@property (retain, nonatomic) NSNumber *downloadedFirmwareVersionNumber;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *idleResetTimerQueue;
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (retain, nonatomic) HMFTimer *idleResetTimer;
@property (readonly, nonatomic) long long otaProviderState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)_updateStateAsString:(unsigned char)a0;
- (void)checkCurrentFirmwareVersionNumber:(id)a0;
- (void)handleOTARequestorAttributeReport:(id)a0;
- (id)initWithFirmwareUpdateStatus:(id)a0 accessoryServer:(id)a1 browser:(id)a2;
- (id)readForHAPFirmwareUpdateReadinessCharacteristic:(id)a0;
- (id)readForHAPFirmwareUpdateStatusCharacteristic:(id)a0;
- (id)readForMatterFirmwareUpdateStatusCharacteristic:(id)a0;
- (void)updateDownloadedFirmwareVersionNumber:(id)a0;
- (void)updateFirmwareUpdateStatus:(long long)a0;

@end
