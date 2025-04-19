@class NSString, NSTextField;

@interface TitleRowItem : NSCollectionViewItem {
    NSTextField *_textField;
}

@property (weak, nonatomic) NSString *titleText;

- (void).cxx_destruct;
- (void)loadView;

@end
