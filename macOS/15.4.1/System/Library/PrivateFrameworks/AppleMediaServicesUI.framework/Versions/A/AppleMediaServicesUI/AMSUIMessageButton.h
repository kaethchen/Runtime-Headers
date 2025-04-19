@class AMSDialogAction, NSColor, NSFont;

@interface AMSUIMessageButton : AMSUICommonButton

@property unsigned long long messageStyle;
@property BOOL isFooterButton;
@property (readonly) AMSDialogAction *dialogAction;
@property (retain) NSFont *preferredFont;
@property (retain) NSColor *preferredForegroundColor;
@property (retain) NSColor *preferredBackgroundColor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_symbolConfiguration;
- (void)_startObservations;
- (id)_chevronImage;
- (id)_appendChevronToString:(id)a0;
- (void)_axSettingsDidUpdate:(id)a0;
- (id)_closeImage;
- (void)_endObservations;
- (void)_setAXSettings;
- (void)_setAccessibilityIdentifier;
- (void)_setImagePadding;
- (void)_setupWithDialogAction:(id)a0;
- (void)commitAppearance;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (BOOL)isDefaultCloseButton;
- (void)setFooterStyle;

@end
