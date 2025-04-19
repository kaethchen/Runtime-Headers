@interface AVBTimeErrorValue : NSObject

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long error;

- (id)description;
- (id)initWithTimestamp:(unsigned long long)a0 andError:(long long)a1;

@end
