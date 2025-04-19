@interface GFIRusageInfo : NSObject

@property (readonly, nonatomic) unsigned long long physFootprint;
@property (readonly, nonatomic) unsigned long long intervalMaxPhysFootprint;
@property (readonly, nonatomic) unsigned long long neuralFootprint;
@property (readonly, nonatomic) unsigned long long intervalMaxNeuralFootprint;

- (id)initWithPhysFootprint:(unsigned long long)a0 intervalMaxPhysFootprint:(unsigned long long)a1 neuralFootprint:(unsigned long long)a2 intervalMaxNeuralFootprint:(unsigned long long)a3;

@end
