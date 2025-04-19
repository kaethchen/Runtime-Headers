@class HMDCharacteristic;

@interface HMDWidgetMonitoredCharacteristic : NSObject

@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) BOOL reachabilityMonitored;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 reachabilityMonitored:(BOOL)a1;

@end
