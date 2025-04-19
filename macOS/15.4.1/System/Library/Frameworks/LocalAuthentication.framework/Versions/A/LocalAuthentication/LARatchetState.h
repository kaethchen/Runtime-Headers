@class LARatchetStateValue, NSString;

@interface LARatchetState : NSObject

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) LARatchetStateValue *value;
@property (readonly, nonatomic) NSString *uuid;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithState:(id)a0;
- (id)initWithRawValue:(long long)a0 value:(id)a1 uuid:(id)a2;

@end
