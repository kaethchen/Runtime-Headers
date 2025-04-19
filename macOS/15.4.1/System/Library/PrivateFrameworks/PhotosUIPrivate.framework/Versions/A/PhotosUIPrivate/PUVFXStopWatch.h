@class NSObject;
@protocol OS_os_log;

@interface PUVFXStopWatch : NSObject

@property unsigned long long sid;
@property NSObject<OS_os_log> *log;

- (id)initWithLog:(id)a0;

@end
