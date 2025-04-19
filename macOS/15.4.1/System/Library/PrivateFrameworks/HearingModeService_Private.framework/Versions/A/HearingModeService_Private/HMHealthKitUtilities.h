@class NSString, NSMutableDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMHealthKitUtilities : NSObject <HKFeatureStatusProvidingObserver> {
    BOOL _activateCalled;
    BOOL _audiogramQueryInProgress;
    NSMutableDictionary *_featureManagerMap;
    NSArray *_invalidAudiograms;
    NSArray *_validAudiograms;
    NSMutableDictionary *_featureIDRegionStatusMap;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ featureStatusChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)frequencyBins;
+ (id)frequencyToHearingDecibelLevelMapFromAudiogram:(id)a0;
+ (id)requiredFrequencyBins;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (void)_audiogramsQueryHandler:(id)a0 results:(id)a1 error:(id)a2;
- (BOOL)_isAudiogramValid:(id)a0;
- (void)_startAudiogramQuery;
- (unsigned char)_getHMRegionStatusFromFeatureStatus:(id)a0 featureIdentifier:(id)a1;
- (unsigned char)getRegionSupportStatusForFeatureID:(id)a0;
- (void)startAudiogramQuery;
- (void)updateHMSettingsStruct:(struct { unsigned char x0; unsigned char x1; unsigned short x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } x4; } *)a0 fromAudiogram:(id)a1;

@end
