@class NSDictionary;

@interface IFGraphicSymbolOverrides : NSObject

@property (copy) NSDictionary *items;

+ (id)overrides;
+ (id)overridesFileURL;

- (void).cxx_destruct;
- (id)overrideForSymbol:(id)a0 shape:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
