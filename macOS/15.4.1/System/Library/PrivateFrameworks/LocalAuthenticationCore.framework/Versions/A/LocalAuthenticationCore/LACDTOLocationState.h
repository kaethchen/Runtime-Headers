@class NSDate;

@interface LACDTOLocationState : NSObject

@property (readonly, nonatomic) BOOL isInFamiliarLocation;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) BOOL confirmed;
@property (readonly, nonatomic) long long rawValue;

+ (id)nullInstance;
+ (id)strictLocationState;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid:(id)a0;
- (id)initWithRawValue:(long long)a0 confirmed:(BOOL)a1;
- (id)initWithRawValue:(long long)a0 confirmed:(BOOL)a1 createdAt:(id)a2;

@end
