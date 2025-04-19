@class NSDictionary, NSArray;

@interface _LTDASRConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (readonly, nonatomic) NSArray *localeIdentifiers;
@property (readonly, nonatomic) NSArray *locales;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
