@interface TRIProcessInfo : NSObject

+ (BOOL)hostingProcessIsCoreAnalytics;
+ (BOOL)hostingProcessIsSystemProcess;
+ (BOOL)hostingProcessIsTriald;
+ (BOOL)hostingProcessIsTrialdSystem;

@end
