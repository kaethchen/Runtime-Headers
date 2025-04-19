@class NSArray, NSStackView;

@interface PerSitePreferencesPopoverViewController : TitleAndStackViewController {
    NSStackView *_checkBoxElementStackView;
}

@property (copy, nonatomic) NSArray *checkBoxElements;

- (void).cxx_destruct;
- (void)updateView;

@end
