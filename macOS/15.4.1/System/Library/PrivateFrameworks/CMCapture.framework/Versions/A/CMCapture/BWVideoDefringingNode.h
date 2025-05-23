@class NSString, FigVideoDefringingProcessor, BWLimitedGMErrorLogger;

@interface BWVideoDefringingNode : BWNode {
    BOOL _isSlomo;
    BOOL _propagateSynchronizedSlaveFrame;
    NSString *_sensorIDString;
    NSString *_portType;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSString *_cameraToDefringe;
    FigVideoDefringingProcessor *_videoDefringingProcessor;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithSensorIDString:(id)a0 portType:(id)a1 propagateSynchronizedSlaveFrame:(BOOL)a2 isSlomo:(BOOL)a3;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
