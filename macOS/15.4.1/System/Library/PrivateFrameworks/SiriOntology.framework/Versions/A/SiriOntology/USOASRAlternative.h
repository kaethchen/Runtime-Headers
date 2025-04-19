@class NSString, NSNumber;

@interface USOASRAlternative : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSNumber *probability;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)initWithValue:(id)a0 probability:(float)a1;

@end
