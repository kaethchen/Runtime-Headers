@class NSString;

@interface RTMapServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useBackgroundTraits;
@property (readonly, nonatomic) NSString *analyticsIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUseBackgroundTraits:(BOOL)a0 analyticsIdentifier:(id)a1;
- (id)initWithUseBackgroundTraits:(BOOL)a0 analyticsIdentifier:(id)a1 clientIdentifier:(id)a2;

@end
