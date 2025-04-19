@class NSString, NSImage, ASCredentialRequestInfoLabelSubPane;

@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    NSString *_title;
    long long _titleStyle;
    NSString *_subtitle;
    long long _subtitleStyle;
    NSImage *_icon;
    long long _iconStyle;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 titleStyle:(long long)a1 subtitle:(id)a2 subtitleStyle:(long long)a3 icon:(id)a4 iconStyle:(long long)a5;
- (void)updateSubtitle:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
