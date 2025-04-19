@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMOdometryManager : NSObject {
    id _internal;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } _locationdConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    id /* block */ _backgroundInertialOdometryHandler;
    NSOperationQueue *_backgroundInertialOdometryQueue;
    unsigned long long _referenceFrameBIO;
}

@property (nonatomic) double odometryUpdateInterval;

+ (BOOL)isAvailable;
+ (BOOL)isBackgroundAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initPrivate;
- (void)deallocPrivate;
- (void)feedOdometryData:(const struct InertialOdometryData { double x0; struct { unsigned long long x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; unsigned long long x3; unsigned long long x4; unsigned long long x5[3]; unsigned long long x6; float x7[4]; float x8; unsigned char x9; } x1; } *)a0;
- (void)sendOdometryToClientPrivate;
- (void)setOdometryUpdateIntervalPrivate:(double)a0;
- (void)setupBIO;
- (void)startBackgroundUpdatesPrivateUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)startBackgroundUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startBackgroundUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1 usingReferenceFrame:(unsigned long long)a2;
- (void)startBackgroundUpdatesUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)startOdometryUpdatesPrivateUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)startOdometryUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startOdometryUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1 usingReferenceFrame:(unsigned long long)a2;
- (void)startOdometryUpdatesUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopBackgroundUpdates;
- (void)stopBackgroundUpdatesPrivate;
- (void)stopOdometryUpdates;
- (void)stopOdometryUpdatesPrivate;
- (void)teardownBIO;

@end
