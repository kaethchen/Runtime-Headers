@class AKRatchetStateData;

@interface AKRatchetState : NSObject

@property (readonly, nonatomic) unsigned long long rawState;
@property (readonly, nonatomic) AKRatchetStateData *data;

- (void).cxx_destruct;
- (id)initWithRawState:(unsigned long long)a0 data:(id)a1;
- (id)toString:(unsigned long long)a0;

@end
