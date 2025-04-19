@class NSScrollView, VUINSNavigationItem, VUINSNavigationBar;

@interface VUINSLargeNavTitleHandler : NSObject

@property (weak, nonatomic) VUINSNavigationBar *navigationBar;
@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) VUINSNavigationItem *currentItem;

+ (id)largeTitleHeaderViewFromScrollView:(id)a0;

- (void).cxx_destruct;
- (id)initWithNavigationBar:(id)a0;
- (BOOL)_shouldShowLargeTitleForItem:(id)a0;
- (void)setScrollView:(id)a0 item:(id)a1;
- (void)updateLargeTitleAppearanceForItem:(id)a0;

@end
