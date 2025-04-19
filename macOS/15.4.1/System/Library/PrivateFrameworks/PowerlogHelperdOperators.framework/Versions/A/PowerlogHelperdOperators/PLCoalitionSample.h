@interface PLCoalitionSample : NSObject

@property unsigned long long instructions;
@property unsigned long long pInstructions;
@property unsigned long long bytesread;
@property unsigned long long byteswritten;
@property unsigned long long gpuTime;
@property unsigned long long cpuTime;
@property unsigned long long aneTime;
@property unsigned long long aneEnergy;
@property unsigned long long gpuEnergy;
@property unsigned long long cpuEnergy;

- (id)description;

@end
