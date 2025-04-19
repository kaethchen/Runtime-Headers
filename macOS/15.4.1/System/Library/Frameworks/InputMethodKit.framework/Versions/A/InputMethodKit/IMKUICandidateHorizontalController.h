@interface IMKUICandidateHorizontalController : IMKUIWindowBasedCandidateController

- (double)numberOfColumns;
- (id)topVisibleCandidates;
- (long long)windowCategory;
- (BOOL)windowIsHorizontal;

@end
