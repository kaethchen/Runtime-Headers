@class NSString;

@interface PPSMessageMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)allDeclMetrics;
+ (id)messageTranscriptForegroundMetrics;
+ (id)rcsRegisterKeepAliveMetrics;
+ (id)rcsSessionManagementMetrics;


@end
