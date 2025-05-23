@class NSObject;
@protocol OS_dispatch_queue;

@interface TCPProgressProbe : NSObject {
    NSObject<OS_dispatch_queue> *lqueue;
    const char *interfaceName;
    unsigned int state;
    unsigned long long _countPremiumModeClients;
}

@property (readonly, nonatomic) unsigned long long interfaceIndex;
@property (nonatomic) BOOL localFlowTracking;

+ (void)initialize;
+ (void)forceInvalidationFor:(id)a0 periods:(unsigned long long)a1;
+ (id)probeForInterface:(id)a0;
+ (id)progressPrettyPrintUtility:(struct nstat_progress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_initForInterface:(id)a0;
- (void)fetchMetricsForFlowsAged:(double)a0 metrics:(struct nstat_progress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a1 resultBlock:(id /* block */)a2;
- (BOOL)interfaceMappingIsCurrent;
- (BOOL)manage:(unsigned int)a0 outValue:(unsigned int *)a1;

@end
