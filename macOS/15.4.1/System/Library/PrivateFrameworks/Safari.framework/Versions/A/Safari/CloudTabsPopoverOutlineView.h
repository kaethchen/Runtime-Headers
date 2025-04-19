@protocol CloudTabsPopoverOutlineViewDelegate;

@interface CloudTabsPopoverOutlineView : NSOutlineView

@property (weak) id<CloudTabsPopoverOutlineViewDelegate> delegate;

- (void)keyDown:(id)a0;

@end
