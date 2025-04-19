@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {
    NSString *_portType;
    NSDictionary *_noiseReductionAndSharpeningConfiguration;
}

- (void)dealloc;
- (id)description;
- (id)portType;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (id)noiseReductionAndSharpeningConfigurationForType:(int)a0 gain:(float)a1;
- (id)noiseReductionAndSharpeningConfigurationForType:(int)a0 gain:(float)a1 qSub:(BOOL)a2;

@end
