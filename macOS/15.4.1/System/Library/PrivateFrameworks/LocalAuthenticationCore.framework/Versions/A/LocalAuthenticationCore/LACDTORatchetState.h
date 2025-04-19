@class NSString;

@interface LACDTORatchetState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double resetDuration;
@property (readonly, nonatomic) double effectiveDuration;
@property (readonly, nonatomic) NSString *uuid;

+ (id)nullInstance;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRawValue:(long long)a0 duration:(double)a1 resetDuration:(double)a2 uuid:(id)a3;

@end
