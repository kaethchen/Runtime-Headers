@class NSMutableArray, NSArray, NSString, HKAudiogramSample, NSData, NSObject, HMAccessoryManager;
@protocol OS_dispatch_queue;

@interface HMEnrollmentService : NSObject {
    HMAccessoryManager *_accessoryManager;
    NSArray *_audiograms;
    NSString *_bluetoothDeviceAddress;
    NSData *_currentConfig;
    NSMutableArray *_invalidAudiograms;
    NSMutableArray *_validAudiograms;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy) NSArray *validAudiograms;
@property (readonly, copy) NSArray *invalidAudiograms;
@property (copy, nonatomic) id /* block */ audiogramsFoundHandler;
@property (copy, nonatomic) id /* block */ audiogramsAvailableHandler;
@property (retain, nonatomic) HKAudiogramSample *selectedAudiogram;
@property (nonatomic) float amplification;
@property (nonatomic) float tone;
@property (nonatomic) float balance;
@property (nonatomic) float beamFormer;
@property (nonatomic) float noiseSuppression;

- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (id)initWithDeviceAddress:(id)a0;
- (float)getTone;
- (void)_accessoryReceivedHearingModeSettings:(id)a0;
- (void)_accessorySendHearingModeSettings;
- (void)_audiogramsQueryHandler:(id)a0 results:(id)a1 error:(id)a2;
- (void)_getHearingModeSettings:(struct { unsigned char x0; unsigned char x1; unsigned short x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x4; } *)a0 fromAudiogram:(id)a1;
- (BOOL)_isAudiogramValid:(id)a0;
- (void)_startAudiogramQuery;
- (void)_triggerOnDemandFaultCheckWithCompletionHandler:(id /* block */)a0;
- (float)getAmplification;
- (float)getBalance;
- (float)getBeamFormer;
- (float)getNoiseSuppression;
- (void)resetTunings;
- (void)triggerOnDemandFaultCheckWithCompletionHandler:(id /* block */)a0;

@end
