@class NSDictionary;

@interface PXBackgroundSystemSchedulerWrapper : NSObject

@property (class, readonly, nonatomic) NSDictionary *taskParameters;

+ (BOOL)signalTaskStartedWithError:(id *)a0;
+ (BOOL)signalTaskStoppedWithError:(id *)a0;

@end
