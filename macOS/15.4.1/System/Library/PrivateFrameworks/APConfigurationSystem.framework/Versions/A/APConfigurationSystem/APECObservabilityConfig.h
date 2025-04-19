@class NSDictionary, NSNumber, NSString;

@interface APECObservabilityConfig : APConfiguration

@property (readonly, nonatomic) NSDictionary *communicationReportClientCodeBuckets;
@property (readonly, nonatomic) NSDictionary *communicationReportServerCodeBuckets;
@property (readonly, nonatomic) NSDictionary *dailyReportClientCodeBuckets;
@property (readonly, nonatomic) NSDictionary *dailyReportServerCodeBuckets;
@property (readonly, nonatomic) NSDictionary *createdToBufferedTimeHistogram;
@property (readonly, nonatomic) NSDictionary *bufferedTimeHistogram;
@property (readonly, nonatomic) NSNumber *regularJobDaemonStartDelay;
@property (readonly, nonatomic) NSNumber *xpcTimerGracePeriod;
@property (readonly, nonatomic) NSString *xpcTimerPriority;

+ (id)path;

@end
