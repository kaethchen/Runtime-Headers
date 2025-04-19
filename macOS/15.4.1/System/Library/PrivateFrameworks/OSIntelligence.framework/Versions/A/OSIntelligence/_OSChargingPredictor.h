@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _OSChargingPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)predictor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleInterruption;
- (id)chargePredictionOutputOfScheme:(unsigned long long)a0 withError:(id *)a1;
- (void)initConnection;
- (id)fixModelOutput:(id)a0;
- (id)validConnection;
- (int)expectedMinimumDischarge;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)isDeepDischargeExpected;
- (BOOL)longChargeExpected;
- (BOOL)longChargeExpectedWithConfidence:(double)a0;
- (double)predictedChargeDuration;
- (double)timeUntilNextExpectedPlugin;
- (double)timeUntilNextExpectedPluginWithConfidence:(double)a0;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;

@end
