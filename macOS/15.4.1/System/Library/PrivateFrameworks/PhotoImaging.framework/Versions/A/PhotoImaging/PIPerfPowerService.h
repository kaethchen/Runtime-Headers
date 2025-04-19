@class PIPerfPowerRecord, PIPerfPowerServiceIdentifier;

@interface PIPerfPowerService : NSObject

@property (retain, nonatomic) PIPerfPowerRecord *record;
@property (readonly, nonatomic) PIPerfPowerServiceIdentifier *identifier;
@property (readonly, nonatomic) long long operation;

- (id)init;
- (void).cxx_destruct;
- (void)measureBlock:(id /* block */)a0;
- (void)beginMeasuring;
- (void)endMeasuring;
- (id)initWithIdentifier:(id)a0 operation:(long long)a1;

@end
