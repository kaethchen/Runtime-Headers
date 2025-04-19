@class NSURL, NSString, NSObject;
@protocol OS_os_log;

@interface MFJunkMailFilter : NSObject <EFSignpostable> {
    struct __LSMMap { } *_map;
    BOOL _isDirty;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) NSURL *mapFileURL;
@property (copy, nonatomic) NSString *mapFilePath;
@property (retain, nonatomic) NSURL *oldMapFileURL;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) BOOL isInTraining;
@property (readonly, copy, nonatomic) NSString *state;
@property (nonatomic) BOOL useCleanMap;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL gatherUsageCounts;
@property (readonly, nonatomic) unsigned long long evaluatedMessageCount;
@property (readonly, nonatomic) unsigned long long evaluatedAsJunkMessageCount;
@property (readonly, nonatomic) unsigned long long manuallyMarkedAsJunkMessageCount;
@property (readonly, nonatomic) unsigned long long manuallyMarkedAsNotJunkMessageCount;
@property (readonly, nonatomic) long long junkMailTrainingBalance;
@property (readonly, nonatomic) long long junkMailTrainingDebt;
@property (readonly, nonatomic) long long junkMailTrainingCredit;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_junkFilterUsageCounterKeys;
+ (void)incrementJunkMailTrainingCreditBy:(long long)a0;
+ (void)incrementJunkMailTrainingDebtBy:(long long)a0;
+ (id)junkStringForMessage:(id)a0 withRecorder:(id)a1 signpostID:(unsigned long long)a2;
+ (void)resetJunkMailTrainingBalance;
+ (void)resetJunkMailUsageCounters;
+ (BOOL)shouldUpdateTrainingDebt;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (struct __LSMMap { } *)map;
- (void)setMap:(struct __LSMMap { } *)a0;
- (id)_usageCounter;
- (void)_saveTrainingWithDelay;
- (id)junkMailAnalysisResultForMessage:(id)a0 junkRecorder:(id)a1;
- (long long)junkMailLevelForMessage:(id)a0;
- (long long)junkMailLevelForMessage:(id)a0 junkRecorder:(id)a1;
- (void)saveTraining;
- (id)trainOnMessages:(id)a0 junkMailLevel:(long long)a1;
- (void)userDidReplyToMessage:(id)a0;

@end
