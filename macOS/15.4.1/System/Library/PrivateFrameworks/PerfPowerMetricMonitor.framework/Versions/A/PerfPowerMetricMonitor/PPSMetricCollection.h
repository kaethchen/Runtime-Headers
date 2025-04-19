@class NSNumber, NSMutableDictionary, PPSMetricSample;

@interface PPSMetricCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PPSMetricSample *systemLoadPower;
@property (retain, nonatomic) PPSMetricSample *batteryPower;
@property (retain, nonatomic) PPSMetricSample *dcInputPower;
@property (retain, nonatomic) PPSMetricSample *cpuPower;
@property (retain, nonatomic) PPSMetricSample *gpuPower;
@property (retain, nonatomic) PPSMetricSample *dramPower;
@property (retain, nonatomic) PPSMetricSample *anePower;
@property (retain, nonatomic) PPSMetricSample *otherSocPower;
@property (retain, nonatomic) PPSMetricSample *wifiPower;
@property (retain, nonatomic) PPSMetricSample *cellularPower;
@property (retain, nonatomic) PPSMetricSample *displayPower;
@property (retain, nonatomic) PPSMetricSample *chargingRate;
@property (nonatomic) BOOL isSystemPowerAvailableWhileCharging;
@property (retain, nonatomic) PPSMetricSample *batteryTemperature;
@property (retain, nonatomic) PPSMetricSample *skinTemperature;
@property (nonatomic) long long thermalPressure;
@property (nonatomic) long long inducedThermalPressure;
@property (retain, nonatomic) PPSMetricSample *displayAPL;
@property (retain, nonatomic) PPSMetricSample *displayAZL;
@property (retain, nonatomic) PPSMetricSample *displayCost;
@property (retain, nonatomic) NSMutableDictionary *processMetrics;
@property (retain, nonatomic) PPSMetricSample *displayFPS;
@property (retain, nonatomic) PPSMetricSample *scanoutFPS;
@property (retain, nonatomic) PPSMetricSample *wifiAWDLStatus;
@property (retain, nonatomic) PPSMetricSample *wifiAWDLRange;
@property (retain, nonatomic) PPSMetricSample *edrHeadroom;
@property (retain, nonatomic) PPSMetricSample *brightness;
@property (retain, nonatomic) NSNumber *sampleTime;
@property (retain, nonatomic) PPSMetricSample *cpuEnergy;
@property (retain, nonatomic) PPSMetricSample *gpuEnergy;
@property (retain, nonatomic) PPSMetricSample *gpuSRAMEnergy;
@property (retain, nonatomic) PPSMetricSample *aneEnergy;
@property (retain, nonatomic) PPSMetricSample *dcsEnergy;
@property (retain, nonatomic) PPSMetricSample *dramEnergy;
@property (retain, nonatomic) PPSMetricSample *pcieEnergy;
@property (retain, nonatomic) PPSMetricSample *dramBytes;
@property (retain, nonatomic) PPSMetricSample *aneDCSBytes;
@property (retain, nonatomic) PPSMetricSample *aneFabricBytes;

+ (id)allPropertyKeys;
+ (id)_metricSamplePropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_stringFromInducedThermalPressure:(long long)a0;
- (id)_stringFromThermalPressure:(long long)a0;
- (void)combineWithMetricCollection:(id)a0;
- (void)updateMetrics:(id)a0 forPid:(id)a1;

@end
