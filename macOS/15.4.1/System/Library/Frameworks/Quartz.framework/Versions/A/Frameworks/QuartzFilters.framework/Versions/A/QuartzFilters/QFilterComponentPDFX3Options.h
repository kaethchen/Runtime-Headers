@interface QFilterComponentPDFX3Options : QFilterComponent

+ (BOOL)isUsedInFilter:(id)a0;

- (id)initWithFilterInfo:(id)a0 parent:(id)a1;
- (id)keysForValuesToObserveForUndo;
- (void)preloadPDFXOptions;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;

@end
