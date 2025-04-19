@class NSString, TRITrackingId, TRIClient, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface PowerUITrialManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) TRIClient *trialClient;
@property (retain) NSString *treatmentID;
@property (retain) NSString *experimentID;
@property (retain, nonatomic) NSString *trialNamespaceName;

- (void).cxx_destruct;
- (double)loadTrialMinInputChargeDuration;
- (void)addUpdateHandler:(id /* block */)a0;
- (double)doubleFactorForName:(id)a0;
- (id)factorForName:(id)a0;
- (id)initWithDefaultsDomain:(id)a0;
- (id)loadModelFromPath:(id)a0 deleteExistingFiles:(BOOL)a1;
- (double)loadTrialAdjustedHours;
- (double)loadTrialDesktopModeEntryThreshold;
- (id)loadTrialDischargeModelByDeletingExistingModel:(BOOL)a0;
- (double)loadTrialDischargeThreshold;
- (id)loadTrialDurationModelByDeletingExistingModel:(BOOL)a0;
- (id)loadTrialEngageModelByDeletingExistingModel:(BOOL)a0;
- (double)loadTrialThreshold;
- (void)loadTrialUpdates;
- (long long)longFactorForName:(id)a0;
- (id)trialFactor:(id)a0;
- (BOOL)useTrialEnabledFeature:(id)a0;

@end
