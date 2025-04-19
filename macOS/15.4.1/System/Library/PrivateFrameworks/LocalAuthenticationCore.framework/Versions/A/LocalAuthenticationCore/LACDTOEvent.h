@interface LACDTOEvent : NSObject

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) id value;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawValue:(long long)a0;
- (id)initWithRawValue:(long long)a0 optionalValue:(id)a1;
- (id)initWithRawValue:(long long)a0 value:(id)a1;

@end
