@class NSString;

@interface PPSDisplayMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)allDeclMetrics;
+ (id)displayLoggingCadence;
+ (id)displayMetricsWithStorage:(int)a0 timeToLive:(unsigned int)a1 category:(id)a2;


@end
