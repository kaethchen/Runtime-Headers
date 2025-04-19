@interface SCRPDFContentList : SCRList

- (id)statusDescription;
- (BOOL)_isSubLevelList;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (long long)groupBehavior;
- (id)prepareArrayToFocusInto;
- (BOOL)shouldAutoFocusOnChildren;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;

@end
