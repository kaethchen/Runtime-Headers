@class NSObject;
@protocol OS_dispatch_queue, DDLogger;

@interface DDLoggerNode : NSObject {
    id<DDLogger> logger;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

+ (id)nodeWithLogger:(id)a0 loggerQueue:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLogger:(id)a0 loggerQueue:(id)a1;

@end
