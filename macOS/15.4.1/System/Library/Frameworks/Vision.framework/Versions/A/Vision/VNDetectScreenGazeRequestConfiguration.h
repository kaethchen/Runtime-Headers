@interface VNDetectScreenGazeRequestConfiguration : VNStatefulRequestConfiguration {
    long long _temporalSmoothingFrameCount;
}

@property (nonatomic) long long temporalSmoothingFrameCount;
@property (nonatomic) unsigned long long screenSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
