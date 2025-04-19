@interface MUIHighlightedMessagesViewControllerFactory : NSObject

+ (id)createViewControllerForMessages:(id)a0 mailboxes:(id)a1 cellLayoutValues:(id)a2 contactStore:(id)a3 delegate:(id)a4;
+ (void)hideBelowLineMessagesForViewController:(id)a0;
+ (void)refreshFontsForViewController:(id)a0;
+ (void)resetSelectionForViewController:(id)a0;
+ (void)updateContainerInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 forViewController:(id)a1;
+ (void)updateMessages:(id)a0 mailboxes:(id)a1 forViewController:(id)a2;

- (id)init;

@end
