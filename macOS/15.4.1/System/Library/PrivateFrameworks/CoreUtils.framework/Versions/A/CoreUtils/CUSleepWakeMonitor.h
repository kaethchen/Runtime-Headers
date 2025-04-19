@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CUSleepWakeMonitor : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __IOPMConnection { } *_powerCnx;
    unsigned int _sleepWakeFlags;
    int _sleepWakeState;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ sleepWakeHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_sleepWakeHandler:(unsigned int)a0 cnx:(struct __IOPMConnection { } *)a1 token:(unsigned int)a2;

@end
