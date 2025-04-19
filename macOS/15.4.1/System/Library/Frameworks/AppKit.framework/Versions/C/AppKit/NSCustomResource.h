@class NSString, NSNumber, NSImageSymbolConfiguration;

@interface NSCustomResource : NSObject <NSCoding> {
    NSString *className;
    NSString *resourceName;
    NSString *resourceCatalogName;
    NSNumber *imageIsTemplate;
    NSImageSymbolConfiguration *imageSymbolConfiguration;
    double variableValue;
}

@property (copy) NSString *className;
@property (copy) NSString *resourceName;
@property (copy) NSString *resourceCatalogName;
@property (copy) NSNumber *imageIsTemplate;
@property (copy) NSImageSymbolConfiguration *imageSymbolConfiguration;
@property double variableValue;

+ (void)initialize;
+ (id)bundleForCurrentNib;
+ (id)bundleForImageSearch;
+ (void)popBundleForImageSearch;
+ (void)pushBundleForImageSearch:(id)a0;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)_loadImageWithName:(id)a0 symbolCatalogName:(id)a1 symbolConfiguration:(id)a2 isTemplateValue:(id)a3 variableValue:(double)a4;
- (id)loadCIImageWithName:(id)a0;
- (id)loadImageWithName:(id)a0;
- (id)loadImageWithName:(id)a0 symbolCatalogName:(id)a1;
- (id)loadImageWithName:(id)a0 symbolCatalogName:(id)a1 symbolConfiguration:(id)a2 isTemplateValue:(id)a3 variableValue:(double)a4;
- (id)loadSoundWithName:(id)a0;

@end
