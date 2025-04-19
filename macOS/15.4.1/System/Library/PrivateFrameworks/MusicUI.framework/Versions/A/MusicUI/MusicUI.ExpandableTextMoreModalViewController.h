@interface MusicUI.ExpandableTextMoreModalViewController : NSViewController <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ attributedString;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ maxWindowHeight;
    void /* unknown type, empty encoding */ maximumNumberOfLinesInTitle;
    void /* unknown type, empty encoding */ footerDelegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;

@end
