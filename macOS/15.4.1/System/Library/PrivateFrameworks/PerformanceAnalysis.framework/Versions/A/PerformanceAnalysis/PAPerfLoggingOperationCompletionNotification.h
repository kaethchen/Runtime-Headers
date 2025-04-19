@class NSString, NSData, NSDictionary;

@interface PAPerfLoggingOperationCompletionNotification : NSObject

@property (readonly) NSString *processName;
@property (readonly) int pid;
@property (readonly) NSString *operationCategory;
@property (readonly) NSString *operationName;
@property (readonly) NSString *matchingCategoryRegex;
@property (readonly) NSString *matchingNameRegex;
@property (readonly) NSString *matchingProcessNameRegex;
@property (readonly) unsigned long long startTimeInMachAbsTime;
@property (readonly) unsigned long long endTimeInMachAbsTime;
@property (readonly) unsigned long long durationInMachAbsTime;
@property (readonly) NSData *detailedReportData;
@property (readonly) double startTimeInMs;
@property (readonly) double endTimeInMs;
@property (readonly) double durationInMs;
@property (readonly) NSDictionary *intervalTypeToIntervalDataDict;

+ (void)registerForCompletionNotificationsOnQueue:(id)a0 withHandler:(id /* block */)a1;
+ (void)unregisterForCompletionNotifications;

- (void)dealloc;

@end
