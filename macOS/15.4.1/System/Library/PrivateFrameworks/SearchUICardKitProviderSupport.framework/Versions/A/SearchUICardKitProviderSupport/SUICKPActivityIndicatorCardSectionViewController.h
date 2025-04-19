@interface SUICKPActivityIndicatorCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (BOOL)_expectsSearchUIView;
- (BOOL)_isIndicatingActivity;
- (BOOL)_shouldRenderButtonOverlay;

@end
