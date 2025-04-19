@class NSObject, CMAPencilFusionResult, NSMutableArray, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CMAPencilFusion : NSObject {
    struct unique_ptr<CMABarrelRoll::CMABarrelRollService, std::default_delete<CMABarrelRoll::CMABarrelRollService>> { struct __compressed_pair<CMABarrelRoll::CMABarrelRollService *, std::default_delete<CMABarrelRoll::CMABarrelRollService>> { struct CMABarrelRollService *__value_; } __ptr_; } _barrelRollService;
}

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSMutableArray *estimations;
@property (nonatomic) unsigned long long currentEstimationUpdateIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL verboseLoggingEnabled;
@property (nonatomic) BOOL mslEnabled;
@property (nonatomic) BOOL preciseTipPositionLoggingEnabled;
@property (readonly, nonatomic) CMAPencilFusionResult *currentEstimation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)flushMSL;
- (void)logHostDeviceMotionQuaternion:(id)a0 rotationRate:(SEL)a1 acceleration:(struct { })a2 timestamp:(double)a3;
- (void)logPencilDeviceMotionQuaternion:(id)a0 rotationRate:(SEL)a1 acceleration:(struct { })a2 gyroBias:(char)a3 temperatureGyroBias:(char)a4 temperatureGyro:(unsigned short)a5 status:(unsigned long long)a6 sensorTime:(double)a7 timestamp:(void /* unknown type, empty encoding */)a8;
- (void)logPencilFusionResult:(id)a0;
- (void)logTouchAltitudeAngle:(SEL)a0 altitudeAngleConfidence:(float)a1 azimuthAngle:(float)a2 azimuthAngleConfidence:(float)a3 position:(float)a4 positionConfidence:(float)a5 timestamp:(double)a6;
- (void)readUserDefaults;
- (void)sendPencilGyroBiasAxisStatistics:(struct CMAPencilGyroBiasAxisStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; })a0 axis:(int)a1;
- (void)sendPencilSensorContactTypeStatistics:(struct CMAPencilSensorContactTypeStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; })a0 contactType:(int)a1;
- (void)sendPencilStatistics;
- (void)sendPencilTimingStatistics:(struct CMAPencilTimingStatistics { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; })a0;
- (BOOL)startPencilFusionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startUserDefaults;
- (void)stopPencilFusionUpdates;
- (void)stopPencilFusionUpdatesPrivate;
- (void)stopUserDefaults;
- (void)updateEstimationsWithRealValuesWithQuaternion:(struct CMOQuaternion { float x0[4]; })a0 timestamp:(double)a1;
- (void)updateHostDeviceMotionQuaternion:(id)a0 rotationRate:(SEL)a1 acceleration:(struct { })a2 timestamp:(double)a3;
- (void)updatePencilDeviceMotionPayload:(id)a0;
- (void)updateTouchAltitudeAngle:(SEL)a0 altitudeAngleConfidence:(float)a1 azimuthAngle:(float)a2 azimuthAngleConfidence:(float)a3 position:(float)a4 positionConfidence:(float)a5 timestamp:(double)a6;

@end
