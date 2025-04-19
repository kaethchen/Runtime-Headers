@class NSString, NSArray, NSDictionary;

@interface RMConfigurationUIDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *titleUI;
@property (readonly, copy, nonatomic) NSString *descriptionUI;
@property (readonly, nonatomic) NSArray *detailsUI;
@property (readonly, nonatomic) NSDictionary *hiddenDetails;

+ (id)configurationUIWithTitle:(id)a0 description:(id)a1 details:(id)a2;
+ (id)configurationUIWithTitle:(id)a0 description:(id)a1 details:(id)a2 hiddenDetails:(id)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 description:(id)a1 details:(id)a2 hiddenDetails:(id)a3;
- (BOOL)isEqualToConfigurationUI:(id)a0;

@end
