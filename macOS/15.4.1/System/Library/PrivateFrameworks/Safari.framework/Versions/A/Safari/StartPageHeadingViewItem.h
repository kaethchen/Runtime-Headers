@class NSString, NSAppearance, NSTextField;

@interface StartPageHeadingViewItem : NSCollectionViewItem {
    NSTextField *_label;
    NSString *_initialTitle;
    NSAppearance *_appearance;
}

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (void)loadView;
- (void)setAppearance:(id)a0;

@end
