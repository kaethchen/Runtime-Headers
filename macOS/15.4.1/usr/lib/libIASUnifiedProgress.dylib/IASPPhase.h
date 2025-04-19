@class NSString, NSDictionary;

@interface IASPPhase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) float percentage;
@property (readonly) long long delay;
@property (readonly) NSDictionary *info;

+ (id)phaseWithName:(id)a0 percentage:(float)a1 delay:(long long)a2;
+ (id)phaseWithInfo:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)initWithName:(id)a0 percentage:(float)a1 delay:(long long)a2;

@end
