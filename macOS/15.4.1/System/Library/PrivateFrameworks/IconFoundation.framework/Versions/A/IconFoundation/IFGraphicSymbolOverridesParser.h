@class NSDictionary;

@interface IFGraphicSymbolOverridesParser : NSObject

@property (copy) NSDictionary *rawOverrides;

- (void).cxx_destruct;
- (id)parse;
- (long long)_parseShapeFromRawShape:(id)a0;
- (id)_parseSymbolContent:(id)a0;
- (struct CGSize { double x0; double x1; })_parseSymbolOffsetFromRawItem:(id)a0;
- (float)_parseSymbolSizeAdjusterFromRawItem:(id)a0;
- (unsigned long long)_parseSymbolSizeFromRawItem:(id)a0;
- (long long)_parseSymbolWeightFromRawItem:(id)a0;
- (id)initWithRawOverrides:(id)a0;

@end
