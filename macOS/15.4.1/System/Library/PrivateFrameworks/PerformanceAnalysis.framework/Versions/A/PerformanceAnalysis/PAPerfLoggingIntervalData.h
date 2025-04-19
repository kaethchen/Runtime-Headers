@class NSString, NSArray;

@interface PAPerfLoggingIntervalData : NSObject <PAPerfLoggingResult>

@property (retain) NSString *processName;
@property (retain) NSString *operationCategory;
@property (retain) NSString *operationName;
@property (retain, nonatomic) NSString *intervalType;
@property (readonly) double *intervalDurationInMsArray;
@property (readonly) double *intervalStartTimeInSecArray;
@property (readonly) double averageIntervalDurationInMs;
@property (readonly) double standardDeviationIntervalDurationInMs;
@property (readonly) double normalizedStandardDeviation;
@property (readonly) double intervalRateOverOperationInIntervalsPerSec;
@property (readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
@property unsigned long long intervalCount;
@property unsigned long long numUnpairedIntervalEndsOrStarts;
@property (readonly) double totalOperationDurationInMs;
@property (readonly) double operationStartTimeInSec;
@property (readonly) double operationEndTimeInSec;
@property (readonly) double initialDelayDurationInMs;
@property (readonly) double trailingDelayDurationInMs;
@property (readonly) double startOfFirstIntervalInSec;
@property (readonly) double endOfLastIntervalInSec;
@property (readonly) double timeBetweenOperationStartAndFirstIntervalInMs;
@property (readonly) NSArray *processedContextDataArray;
@property (readonly) NSArray *processedContextDataUOMsArray;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)_initializeFieldsFromParentOperationInformation:(id)a0;
- (BOOL)_isWSFrameInterval;
- (void)_logPAPerfLoggingDataValue:(double)a0 uom:(id)a1 doLocalLogging:(BOOL)a2;
- (id)initWithIntervalType:(id)a0 andIntervalDurationInMSArray:(double *)a1 andIntervalStartTimeInSecArray:(double *)a2 ofLength:(unsigned long long)a3 andNumUnpairedTransitions:(unsigned long long)a4 andTimeOfFirstIntervalStartInSec:(double)a5 andTimeOfLastIntervalEndInSec:(double)a6 andProcessedMetaDataArray:(id)a7 andProcessedMetaDataUOMsArray:(id)a8 withPAPerfLoggingData:(id)a9;
- (void)logIntervalData:(BOOL)a0;
- (void)printTimelineToMutableData:(id)a0;

@end
