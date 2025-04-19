@class NSString, NSArray, NSObject, ASDAudioDevice;
@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct { unsigned char valid; double sampleTime; unsigned long long hostTime; unsigned long long seed; } _lastTimestamp;
}

@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)manufacturerName;
- (id)deviceName;
- (unsigned int)transportType;
- (id)modelName;
- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (unsigned int)inputSafetyOffset;
- (id)modelUID;
- (unsigned int)outputSafetyOffset;
- (double)samplingRate;
- (void)setSamplingRate:(double)a0;
- (id)samplingRates;
- (unsigned int)timestampPeriod;
- (BOOL)changeSamplingRate:(double)a0;
- (id /* block */)getZeroTimestampBlock;
- (int)performStopIO;
- (void)setSamplingRates:(id)a0;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (double)sampleRateRatio;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)canBeDefaultSystemDevice;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (unsigned int)clockAlgorithm;
- (BOOL)clockIsStable;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (void)ioThreadStateChange:(id)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (int)startIOForClient:(unsigned int)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;

@end
