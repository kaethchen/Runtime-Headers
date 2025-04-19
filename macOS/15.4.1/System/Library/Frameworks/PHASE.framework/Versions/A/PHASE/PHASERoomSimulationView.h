@class PHASEEngine;

@interface PHASERoomSimulationView : NSObject {
    struct RuntimeDebugParameters { BOOL mTailcorrectionEnabled; unsigned long long mImageSourceOrder; float mLateReverbRayTraceComputeTimeLimit; float mEarlyReflectionsRayTraceComputeTimeLimit; unsigned long long mRayTraceIntersectionHandleCountLimit; unsigned long long mRayTraceIntersectionHandleCounter; BOOL mEarlyScatteringEnabled; float mEarlyReflectionsAggregationCoef; float mEarlyScatteringAggregationCoef; float mLateReverbAggregationCoef; } _runtimeDebugParameters;
}

@property (weak, nonatomic) PHASEEngine *engine;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEngine:(id)a0;
- (void)beginTrackingRoomData:(id)a0 callback:(id /* block */)a1;
- (void)beginTrackingEnergyHistogram:(id)a0 callback:(id /* block */)a1;
- (void)beginTrackingImageSourceLocations:(id)a0 callback:(id /* block */)a1;
- (void)beginTrackingListenerEarlyResponseMetadata:(id)a0 callback:(id /* block */)a1;
- (void)beginTrackingListenerLateReverbMetadata:(id)a0 callback:(id /* block */)a1;
- (void)beginTrackingRayTraceIntersections:(id)a0 callback:(id /* block */)a1;
- (void)endTrackingEnergyHistogram:(id)a0;
- (void)endTrackingImageSourceLocations:(id)a0;
- (void)endTrackingListenerEarlyResponseMetadata:(id)a0;
- (void)endTrackingListenerLateReverbMetadata:(id)a0;
- (void)endTrackingRayTraceIntersections:(id)a0;
- (void)endTrackingRoomData:(id)a0;
- (void)setEarlyReflectionsAggregationCoef:(float)a0;
- (void)setEarlyReflectionsRayTraceComputeTimeLimit:(float)a0;
- (void)setEarlyScatteringAggregationCoef:(float)a0;
- (void)setEarlyScatteringEnabled:(unsigned long long)a0;
- (void)setImageSourceOrder:(unsigned long long)a0;
- (void)setLateReverbAggregationCoef:(float)a0;
- (void)setLateReverbRayTraceComputeTimeLimit:(float)a0;
- (void)setRayTraceIntersectionHandleCountLimit:(unsigned long long)a0;
- (void)setTailcorrectionEnabled:(unsigned long long)a0;

@end
