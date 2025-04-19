@class NSTextField, NSString, ButtonPlus, NSImageView, NSStackView;

@interface EmptyStartPageViewItem : StartPageViewItem <NSTextFieldDelegate> {
    NSTextField *_titleTextField;
    NSStackView *_buttonsStackView;
    id /* block */ _descriptionTextFieldClickHandler;
    NSImageView *_icon;
}

@property (retain, nonatomic) NSTextField *descriptionTextField;
@property (retain, nonatomic) ButtonPlus *primaryButton;
@property (retain, nonatomic) ButtonPlus *secondaryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)loadView;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (void)viewDidLoad;
- (id)_emptyStartPageViewItemButton;
- (void)configureViewWithDescription:(id)a0 imageName:(id)a1;
- (void)configureViewWithTitle:(id)a0 description:(id)a1 secondaryButtonTitle:(id)a2 primaryButtonTitle:(id)a3 target:(id)a4 secondaryButtonAction:(SEL)a5 primaryButtonAction:(SEL)a6 descriptionClickedHandler:(id /* block */)a7;

@end
