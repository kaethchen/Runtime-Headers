@interface StartPageReadingListViewItem : StartPageFullDescriptionViewItem

@property (nonatomic, getter=isGenerated) BOOL generated;

- (void)configureViewWithTitle:(id)a0 description:(id)a1 image:(id)a2 accessoryImage:(id)a3 accessoryLabel:(id)a4 generated:(BOOL)a5;

@end
