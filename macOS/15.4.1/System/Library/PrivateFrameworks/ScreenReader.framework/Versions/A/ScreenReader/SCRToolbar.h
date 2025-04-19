@interface SCRToolbar : SCRMapElement

- (id)typeDescription;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)isContainerElement;
- (BOOL)isSectionView;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)shouldNavigate;

@end
