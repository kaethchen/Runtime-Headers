@class NSArray, NSDictionary;

@interface HDHealthOntologyConfiguration : NSObject {
    NSDictionary *_countryConfigurations;
}

@property (readonly, copy, nonatomic) NSArray *allCountryConfigurations;

+ (id)bundledHealthOntologyConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)configurationForCountryCode:(id)a0;
- (id)initWithCountryConfigurations:(id)a0;

@end
