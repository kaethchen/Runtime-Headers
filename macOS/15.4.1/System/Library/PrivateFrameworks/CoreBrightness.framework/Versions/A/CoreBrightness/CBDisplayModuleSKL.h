@class CBThermalBrightnessCap, NSString, CBRampManager, CBNVRAM, CBAurora, NSMutableDictionary, AABCHistograms, NSObject, NSMutableArray, CBEDR, CBDynamicSlider;
@protocol OS_os_log, OS_dispatch_source, CBBrightnessProxy, CBSliderMapping;

@interface CBDisplayModuleSKL : CBDisplayModule <CBHIDServiceProtocol> {
    id<CBBrightnessProxy> _brightnessControlProxy;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_source> *_delayedBrightnessCommitTimer;
    NSMutableDictionary *_properties;
    float _minNits;
    float _midNits;
    float _maxNits;
    float _maxNitsEDR;
    float _nitsSDRScaled;
    float _nitsSDR;
    float _factor;
    float _minLinearBrightness;
    float _maxLinearBrightness;
    float _nitsCap;
    float _brightnessScaler;
    unsigned long long _chargerState;
    BOOL _chargerStateDimmingEnabled;
    BOOL _snappingEnabled;
    float _snappingSDRBrightnessLimit;
    float _snappingLuxThreshold;
    BOOL _ecoModeState;
    BOOL _brightnessUpdatesDisabled;
    BOOL _builtIn;
    BOOL _running;
    BOOL _supportsSDRBrightness;
    BOOL _supportsEDR;
    float _SDRRefBrightness;
    CBRampManager *_rampManager;
    CBDynamicSlider *_dynamicSlider;
    CBEDR *_edr;
    float _appliedHeadroom;
    float _requestedHeadroom;
    float _lux;
    CBNVRAM *_nvram;
    unsigned long long _displayState;
    unsigned long long _displayStatePending;
    id<CBSliderMapping> _slider;
    NSMutableArray *_ALSServices;
    BOOL _autoBrightnessState;
    BOOL _autoBrightnessReady;
    NSObject<OS_dispatch_source> *_displayOnTimer;
    CBThermalBrightnessCap *_thermalMitigation;
    float _thermalMitigationMinCap;
    struct { BOOL supported; float ramp_down_disable_s; float lux_delta_percent; float ramp_up_s; float ramp_down_s; BOOL enabled; BOOL hdrEnabled; int lastNitsIndex; BOOL useHDRTables; float lastHDRChange; float lastLuxChange; float lastBrightnessChange; struct { int size; float *table; } D_SDR; struct { int size; float *table; } L_SDR; struct { int xSize; int ySize; float[68] *table; } A_SDR; struct { int size; float *table; } HDR_LUT_PT; struct { int size; float *table; } HDR_SCALE_DOWN; float factor; float factor_min; float factor_max; float cabalMin; float cabalMax; } _pcc;
    BOOL _referenceMode;
    BOOL _blrEnabled;
    BOOL _harmonyEnabled;
    CBAurora *_aurora;
    float _auroraScaler;
    AABCHistograms *_analyticsHist;
    long long _analyticsPeriodicSender;
    BOOL _isSnapping;
    BOOL _firstABUpdate;
    float _lastUserBrightness;
    float _snappingTimestamp;
}

@property (readonly, nonatomic) unsigned long long displayID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (float)getDynamicSliderAdjustedSDRNits;
- (float)getUserBrightnessSloperExtended;
- (float)getMaxPanelNits;
- (BOOL)requestSDRBrightnessTransition:(float)a0;
- (void)updateDynamicSliderChargerState;
- (BOOL)addHIDALSService:(id)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)autoBrightnessReady;
- (void)cancelDisplayOnTimer;
- (void)commitUserBrightness:(id)a0;
- (void)completeDisplayStateChange;
- (float)computeBrightnessCompensation;
- (void)configureEDRSecPerStop;
- (void)configurePCCDefaults;
- (void)configureSkyLightTimeouts;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)copyPropertyInternalForKey:(id)a0 withParameter:(id)a1;
- (BOOL)displayBrightnessUpdate;
- (void)displayOnTimerTimeout;
- (BOOL)displaySetBrightnessSmooth:(float)a0 continuous:(BOOL)a1;
- (void)evaluateSnapping;
- (BOOL)getAggregatedLux:(float *)a0;
- (float)getBrightnessLimit;
- (float)getBrightnessScalerCurrent;
- (BOOL)getBrightnessScalerTarget:(float *)a0;
- (unsigned long long)getDeviceID;
- (float)getDynamicSliderAdjustedNits:(float)a0;
- (float)getIncrement;
- (float)getLinearBrightness;
- (float)getLinearBrightnessForNits:(float)a0;
- (float)getMaxNitsAdjusted;
- (float)getMaxNitsEDR;
- (float)getNitsForLinearBrightness:(float)a0;
- (float)getNitsForUserBrightness:(float)a0;
- (float)getPerceptualBrightness;
- (BOOL)getRemainingRampLength:(float *)a0;
- (float)getSDRBrightnessCurrent;
- (BOOL)getSDRBrightnessTarget:(float *)a0;
- (float)getSDRNitsCapped;
- (float)getUserBrightness;
- (float)getUserBrightnessForNits:(float)a0;
- (BOOL)handleBrightnessCapOverride:(id)a0;
- (BOOL)handleChargerStateChange:(id)a0;
- (BOOL)handleDisplayPowerStateUpdate:(id)a0;
- (BOOL)handleEcoModeStateChange:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)handlePowerDecrease;
- (BOOL)handlePowerIncrease;
- (BOOL)hasThermalMitigation;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (void)initialiseAurora;
- (void)initialiseDisplayConfiguration;
- (void)initialiseEDR;
- (void)initialiseSDR;
- (float)luminanceToPerceptual:(float)a0;
- (id)newDisplayInfo;
- (id)newStatusInfo;
- (float)perceptualToLuminance:(float)a0;
- (BOOL)powerStateTransitionOngoing;
- (unsigned long long)powerStateTransitionSignalType;
- (void)processCapabilities;
- (BOOL)rampAuroraScaler:(float)a0 withLength:(float)a1 properties:(id)a2;
- (BOOL)rampBrightnessScaler:(float)a0 withLength:(float)a1 properties:(id)a2;
- (void)rampDynamicSlider:(float)a0 withLength:(float)a1;
- (void)rampEDRHedroom:(float)a0 withLength:(float)a1;
- (void)rampFactor:(float)a0 withLength:(float)a1;
- (void)rampManagerUpdateHandling;
- (BOOL)rampNitsCap:(float)a0;
- (void)rampSDRBrightness:(float)a0 withLength:(float)a1 properties:(id)a2;
- (void)reevaluateDynamicSliderState;
- (void)reevaluateDynamicSliderStateImmediate;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)requestAuroraScalerTransitionStop;
- (BOOL)requestBrightnessScalerTransitionStop;
- (void)requestDisplayDim;
- (void)requestDisplayTurnOFF;
- (void)requestDisplayTurnON;
- (BOOL)requestDynamicSliderImmediate:(float)a0;
- (BOOL)requestDynamicSliderTransition:(float)a0 withLength:(float)a1;
- (BOOL)requestDynamicSliderTransitionStop;
- (BOOL)requestEDRHeadroomImmediate:(float)a0;
- (BOOL)requestEDRHeadroomTransition:(float)a0 withLength:(float)a1;
- (BOOL)requestEDRHeadroomTransitionStop;
- (BOOL)requestFactorImmediate:(float)a0;
- (BOOL)requestFactorTransition:(float)a0 withLength:(float)a1;
- (BOOL)requestFactorTransitionStop;
- (BOOL)requestSDRBrightnessTransition:(float)a0 withLength:(float)a1 properties:(id)a2;
- (BOOL)requestSDRBrightnessTransitionStop;
- (void)sendDisplayBrightnessStateNotificationWithReason:(id)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)setupDisplayOnTimer;
- (void)storeBrightnessLevel;
- (id)stringForInitialNitsType:(unsigned long long)a0;
- (BOOL)supportsDynamicSlider;
- (BOOL)supportsEDR;
- (BOOL)supportsSDRBrightness;
- (void)updateAmbient;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)updateBrightnessState;
- (void)updateContrastEnhancerState:(unsigned long long)a0;
- (void)updateDynamicSliderAmbient;
- (void)updateDynamicSliderAutoBrightness;
- (void)updateDynamicSliderScaler:(float)a0;
- (void)updateEDRAmbient;
- (BOOL)updateSDRBrightness:(float)a0;
- (void)updateSDRNits:(float)a0;
- (BOOL)updateUserBrightness:(float)a0 commit:(BOOL)a1;

@end
