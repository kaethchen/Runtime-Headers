@interface SCRScrubber : SCRElement

- (long long)brailleLineType;
- (BOOL)allowBuildChildren;
- (id)childAfterElement:(id)a0;
- (id)childAtIndex:(unsigned long long)a0 visibleOnly:(BOOL)a1;
- (id)childBeforeElement:(id)a0;
- (id)firstChildForFocusing;
- (unsigned long long)indexOfElement:(id)a0 visibleOnly:(BOOL)a1;
- (id)lastChildForFocusing;
- (id)prepareArrayToFocusInto;
- (BOOL)scrollToShowDescendant:(id)a0;

@end
