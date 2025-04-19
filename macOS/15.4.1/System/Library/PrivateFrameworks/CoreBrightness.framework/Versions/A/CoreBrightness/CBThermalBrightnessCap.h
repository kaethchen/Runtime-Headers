@class NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface CBThermalBrightnessCap : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _notificationBlock;
    unsigned int _smcThermalCapKey;
    unsigned int _smcJetModeKey;
    unsigned int _smcService;
    struct { unsigned int x0; BOOL x1; struct SMCAccumPlatformInfo *x2; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x3[4]; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x4[4]; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0[4]; unsigned int x1[4]; unsigned char x2; unsigned char x3; } x10; BOOL x11; BOOL x12; } *_smcConnection;
    float _lastCap;
}

@property (nonatomic) BOOL supportsJetMode;

- (void)dealloc;
- (void)disable;
- (void)enable;
- (float)getCurrentCap;
- (id)initWithQueue:(id)a0 andNotificationBlock:(id /* block */)a1 andType:(unsigned long long)a2;
- (void)setJetMode:(BOOL)a0;
- (void)timerRoutine;
- (void)unregisterNotificationBlock;

@end
