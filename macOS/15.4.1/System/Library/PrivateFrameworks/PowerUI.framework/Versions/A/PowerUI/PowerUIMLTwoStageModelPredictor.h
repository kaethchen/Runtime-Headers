@class NSNumber, NSString, PowerUITrialManager, NSURL, NSDate, MLModel, NSObject;
@protocol OS_os_log, _CDLocalContext;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor>

@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (retain, nonatomic) NSDate *deadline;
@property (nonatomic) double lastEngagementResult;
@property (nonatomic) double lastDurationResult;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadModelLock;
@property (retain, nonatomic) NSURL *compiledClassifier;
@property (retain, nonatomic) NSURL *compiledRegressor;
@property (readonly, retain, nonatomic) MLModel *engageModel;
@property (readonly, retain, nonatomic) MLModel *durationModel;
@property (retain, nonatomic) NSDate *pluginDate;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic) double adjustedDuration;
@property (nonatomic) double threshold;
@property (nonatomic) double minInputChargeDuration;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_os_log> *statusLog;
@property (retain, nonatomic) NSNumber *confidenceOverride;
@property (retain, nonatomic) NSNumber *durationOverride;

- (void).cxx_destruct;
- (unsigned long long)modelVersion;
- (id)adjustDeadlineForReengagement;
- (double)adjustedChargingDecision:(unsigned long long)a0 withPluginDate:(id)a1 withPluginBatteryLevel:(double)a2 forDate:(id)a3 forStatus:(BOOL)a4;
- (id)arrayWithShape:(id)a0 values:(id)a1 type:(long long)a2;
- (struct PowerUIModelQueryResult { BOOL x0; double x1; double x2; })chargingDecision:(unsigned long long)a0 withPluginDate:(id)a1 withPluginBatteryLevel:(double)a2 forDate:(id)a3 withLog:(id)a4;
- (id)convertInputFeaturesToNeuralFeatures:(id)a0;
- (void)deleteCompiledModels;
- (void)deleteUpdatedModels;
- (id)durationModelBoltID;
- (unsigned long long)durationModelVersion;
- (id)engagementModelBoltID;
- (unsigned long long)engagementModelVersion;
- (double)getHourBinID:(id)a0 forHourBin:(unsigned long long)a1;
- (id)getInputFeaturesWithPluginDate:(id)a0 withPluginBatteryLevel:(double)a1 forDate:(id)a2 withLog:(id)a3;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withTrialManager:(id)a2;
- (double)loadAdjustedHoursForModel:(id)a0;
- (void)loadDurationModelFromURL:(id)a0;
- (void)loadEngagementModelFromURL:(id)a0;
- (double)loadMinInputChargeDuration;
- (double)loadThresholdForModel:(id)a0;
- (void)loadTrial;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)a0;
- (unsigned long long)predictorType;
- (void)resetSavedDeadline;
- (id)timeStringFromDate:(id)a0;

@end
