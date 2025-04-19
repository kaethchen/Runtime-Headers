@class NSString, NSObject;
@protocol OS_os_log;

@interface ActionTimer : NSObject

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)elapsedTime;

@end
