@class NSButton, NSPopUpButton;

@interface KHBarPopupButtonItem : UXBarButtonItem {
    NSButton *_noArrowButton;
}

@property (readonly, nonatomic) NSPopUpButton *popupButton;
@property (readonly, nonatomic) NSButton *noArrowButton;
@property (nonatomic) unsigned long long arrowPosition;

+ (id)popupButtonWithImage:(id)a0 menu:(id)a1;

- (void).cxx_destruct;
- (void)showMenu:(id)a0;
- (id)initWithImage:(id)a0 style:(long long)a1 menu:(id)a2;

@end
