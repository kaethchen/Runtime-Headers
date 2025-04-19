@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CURangingSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersChanged;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ measurementHandler;
@property (copy, nonatomic) id /* block */ measurementHandlerEx;
@property (copy, nonatomic) NSArray *peers;
@property (copy, nonatomic) id /* block */ statusChangedHandler;
@property (readonly, nonatomic) unsigned int statusFlags;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_update;
- (void)_invalidate;
- (void)addSample:(id)a0;
- (void)_invalidated;
- (void)_updateInitiator;
- (void)_updatePeers;
- (void)_updateResponder;

@end
