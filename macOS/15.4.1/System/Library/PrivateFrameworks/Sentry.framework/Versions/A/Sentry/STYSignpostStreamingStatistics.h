@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface STYSignpostStreamingStatistics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subsystemDict;
    NSObject<OS_dispatch_source> *_periodicTimer;
    NSObject<OS_dispatch_source> *_sigtermSource;
    unsigned long long _machAbsTimeStart;
    unsigned long long _totalCount;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)emitTelemetry;
- (void)addSignpost:(id)a0;

@end
