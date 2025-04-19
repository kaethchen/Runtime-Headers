@class NURuleSystem;

@interface PIParallaxColorSuggester : NSObject

@property (readonly, nonatomic) NURuleSystem *system;

- (id)init;
- (void).cxx_destruct;
- (void)addRuleWithHueMin:(double)a0 hueMax:(double)a1 suggestion:(id /* block */)a2;
- (id)initWithColorAnalysis:(id)a0;
- (id)suggestedColorForColor:(id)a0;
- (id)suggestedColorsForColors:(id)a0 fromColorPalette:(id)a1;

@end
