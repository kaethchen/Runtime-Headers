@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface PAPerfLoggingCoreOperation : NSObject {
    NSString *_matchingCategoryRegexString;
    NSString *_matchingNameRegexString;
    NSString *_matchingProcessNameRegexString;
    NSMutableArray *_intervalList;
    NSMutableDictionary *_dictionaryOfIntervalTypesEventArrays;
    NSMutableArray *_intervalTypesSeenOrder;
    NSDictionary *_intervalDataDictionary;
    NSMutableDictionary *_contextProcessingConfigurationsForAllIntervalTypes;
    NSMutableArray *_slowWSUpdateInfoArray;
}

@property (copy, nonatomic) NSString *operationName;
@property (copy, nonatomic) NSString *operationCategory;
@property (copy, nonatomic) NSString *processName;
@property (readonly) int pid;
@property (readonly) double startTimeInSec;
@property (readonly) double endTimeInSec;
@property (readonly) unsigned long long serialNumber;
@property (readonly) BOOL hasSeenWSUpdate;
@property (readonly) NSArray *slowWSUpdateInfoArray;
@property (readonly) unsigned int numSlowWSUpdates;

+ (id)keyForProcessName:(id)a0 operationCategory:(id)a1 andOperationName:(id)a2;

- (void)dealloc;
- (id)_processIntervalEventStream:(id)a0 withContextProcessingConfiguration:(id)a1;
- (void)_addResultsForIntervalsToResultsDict:(id)a0;
- (void)_logNumSlowWSUpdates:(BOOL)a0;
- (unsigned int)_numWSUpdatesDuringOperation;
- (id)getIntervalDataDictionary;
- (id)initWithProcessName:(id)a0 andOperationCategory:(id)a1 andOperationName:(id)a2 andPid:(int)a3;
- (void)logIntervalData:(BOOL)a0;
- (void)markIntervalTransition:(id)a0 transitionType:(int)a1 atCGSTimestampInSec:(double)a2 withContext:(id)a3 isWSIntervalTransition:(BOOL)a4;
- (BOOL)markOperationEndTruncatedByDuration:(double)a0;
- (void)markOperationStart;
- (void)markSlowFrameFrame:(struct __CFBoolean { } *)a0 withIntervalRange:(id)a1;
- (double)operationDurationInMs;
- (id)operationKey;
- (BOOL)setContextProcessingConfiguration:(id)a0 forIntervalType:(id)a1;
- (id)stringForIntervalEventTimeline;

@end
