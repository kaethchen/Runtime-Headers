@class NSDictionary, NSString;

@interface _LTDANEConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (retain, nonatomic) NSDictionary *capabilities;
@property (readonly, nonatomic) NSString *config;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (long long)capabilityForSubType:(id)a0;
- (id)subTypes;

@end
