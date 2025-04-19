@class NSNumber;

@interface DADeviceStateRecord : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSNumber *discoveryTime;
@property (retain, nonatomic) NSNumber *time;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)discoveryTimeIntervelBetweenState:(id)a0;
- (id)initWithState:(long long)a0 andTime:(id)a1;
- (id)stateTransitionAsString:(id)a0;
- (id)timeIntervelBetweenState:(id)a0;

@end
