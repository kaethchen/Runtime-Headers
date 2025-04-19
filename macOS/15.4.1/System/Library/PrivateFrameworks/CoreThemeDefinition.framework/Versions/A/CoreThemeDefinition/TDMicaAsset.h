@class NSSet;

@interface TDMicaAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)_productionWithRenditionsInProductions:(id)a0;
- (id)copyDataFromAttributes;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (id)production;
- (void)setAttributesFromCopyData:(id)a0;

@end
