@class NSNumber, NSString, PPSMetricSample;

@interface PPSProcessMetricCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PPSMetricSample *energyCost;
@property (retain, nonatomic) PPSMetricSample *energyOverhead;
@property (retain, nonatomic) PPSMetricSample *cpuCost;
@property (retain, nonatomic) PPSMetricSample *cpuSeconds;
@property (retain, nonatomic) PPSMetricSample *cpuEnergy;
@property (retain, nonatomic) PPSMetricSample *gpuCost;
@property (retain, nonatomic) PPSMetricSample *gpuTime;
@property (retain, nonatomic) PPSMetricSample *gpuEnergy;
@property (retain, nonatomic) PPSMetricSample *networkCost;
@property (retain, nonatomic) PPSMetricSample *wifiIn;
@property (retain, nonatomic) PPSMetricSample *wifiOut;
@property (retain, nonatomic) PPSMetricSample *cellIn;
@property (retain, nonatomic) PPSMetricSample *cellOut;
@property (retain, nonatomic) PPSMetricSample *locationCost;
@property (retain, nonatomic) PPSMetricSample *ongoingLocation;
@property (retain, nonatomic) PPSMetricSample *applicationState;
@property (retain, nonatomic) PPSMetricSample *cpuInstructions;
@property (retain, nonatomic) PPSMetricSample *cpuPInstructions;
@property (retain, nonatomic) PPSMetricSample *bytesRead;
@property (retain, nonatomic) PPSMetricSample *bytesWritten;
@property (retain, nonatomic) PPSMetricSample *aneEnergy;
@property (retain, nonatomic) PPSMetricSample *aneTime;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSNumber *coalitionID;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *sampleTime;

+ (id)_metricSamplePropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (const char *)_stringForApplicationState:(unsigned int)a0;
- (void)combineWithProcessMetricCollection:(id)a0;

@end
