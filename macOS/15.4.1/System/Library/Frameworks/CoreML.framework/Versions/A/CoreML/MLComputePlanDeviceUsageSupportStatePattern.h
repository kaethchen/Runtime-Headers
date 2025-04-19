@class NSRegularExpression;

@interface MLComputePlanDeviceUsageSupportStatePattern : NSObject

@property (readonly, nonatomic) NSRegularExpression *regex;
@property (readonly, nonatomic) long long supportState;

+ (id)deviceUsageSupportStatePatternWithPattern:(id)a0 supportState:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPattern:(id)a0 supportState:(long long)a1;
- (BOOL)isMatchForValidationMessage:(id)a0;

@end
