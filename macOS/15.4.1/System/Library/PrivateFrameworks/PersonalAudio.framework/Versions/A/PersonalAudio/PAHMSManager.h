@class NSObject, HMServiceClient, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PAHMSManager : NSObject

@property (retain, nonatomic) HMServiceClient *hmsClient;
@property (retain, nonatomic) NSMutableDictionary *yodelDeviceRecordByAddress;
@property (retain, nonatomic) NSMutableDictionary *hearingAidEnabledByAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hmsQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (double)toneForAddress:(id)a0;
- (double)amplificationForAddress:(id)a0;
- (double)balanceForAddress:(id)a0;
- (BOOL)beamformingForAddress:(id)a0;
- (BOOL)hearingAidEnabledForAddress:(id)a0;
- (double)noiseSupressorForAddress:(id)a0;
- (BOOL)regionSupportedForHearingProtection:(id)a0;
- (void)sendConfigUpdate:(id)a0 forAddress:(id)a1;
- (void)sendConfigUpdate:(id)a0 forIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)setAccommodationType:(unsigned long long)a0 forAddress:(id)a1;
- (void)setAmplification:(double)a0 forAddress:(id)a1;
- (void)setBalance:(double)a0 forAddress:(id)a1;
- (void)setBeamforming:(BOOL)a0 forAddress:(id)a1;
- (void)setNoiseSupressor:(double)a0 forAddress:(id)a1;
- (void)setTone:(double)a0 forAddress:(id)a1;
- (void)setupHearingModeService;
- (void)toggleHearingAidForAddress:(id)a0;
- (BOOL)yodelEnabledForAddress:(id)a0;

@end
