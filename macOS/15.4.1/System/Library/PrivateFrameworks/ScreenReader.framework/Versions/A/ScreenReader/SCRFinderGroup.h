@interface SCRFinderGroup : SCRGroup {
    unsigned long long _numOfAXChildren;
}

- (id)typeDescription;
- (void)setChildren:(id)a0;
- (id)_columnViewTextElementChild;
- (BOOL)_containsListChildren;
- (BOOL)_isFinderHeaderStyleIconView;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)handleSelectionChange:(id)a0;
- (BOOL)needToRebuildChildren;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;

@end
