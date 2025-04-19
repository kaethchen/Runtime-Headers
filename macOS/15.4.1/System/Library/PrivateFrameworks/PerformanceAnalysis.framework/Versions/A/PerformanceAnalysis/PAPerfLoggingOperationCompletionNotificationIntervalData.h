@class NSString;

@interface PAPerfLoggingOperationCompletionNotificationIntervalData : NSObject

@property (readonly) NSString *intervalType;
@property (readonly) double intervalRateInIntervalsPerSecond;
@property (readonly) double intervalRateIgnoringDelayInIntervalsPerSecond;
@property (readonly) unsigned long long intervalCount;
@property (readonly) unsigned long long averageDurationInMachAbsTime;
@property (readonly) unsigned long long durationStandardDeviationInMachAbsTime;
@property (readonly) unsigned long long initialDelayInMachAbsTime;
@property (readonly) unsigned long long trailingDelayInMachAbsTime;
@property (readonly) double averageDurationInMs;
@property (readonly) double durationStandardDeviationInMs;
@property (readonly) double initialDelayInMs;
@property (readonly) double trailingDelayInMs;

@end
