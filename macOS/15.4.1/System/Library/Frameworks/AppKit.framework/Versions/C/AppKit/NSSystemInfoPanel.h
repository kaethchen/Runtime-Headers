@class NSTextField, NSPanel, NSScrollView, NSString, NSMutableDictionary, NSTextView, NSLayoutConstraint, NSImageView;

@interface NSSystemInfoPanel : NSObject <NSTextViewDelegate> {
    NSMutableDictionary *_optionsDictionary;
}

@property (retain) NSPanel *infoPanel;
@property NSImageView *appIconView;
@property NSTextField *appNameField;
@property NSTextField *versionField;
@property NSTextView *creditView;
@property (retain) NSScrollView *creditScrollView;
@property NSTextField *copyrightField;
@property NSScrollView *copyrightScrollView;
@property NSLayoutConstraint *creditScrollViewWidthConstraint;
@property NSTextView *copyrightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInfoPanel;
+ (void)updateOptions:(id)a0;
+ (void)updateOptionsWithApplicationIcon:(id)a0;
+ (void)updateOptionsWithApplicationName:(id)a0;
+ (void)updateOptionsWithCopyright:(id)a0;
+ (void)updateOptionsWithCredits:(id)a0;
+ (void)updateOptionsWithMarketingVersion:(id)a0;
+ (void)updateOptionsWithVersion:(id)a0;

- (void)dealloc;
- (id)applicationIcon;
- (id)backgroundImage;
- (id)applicationName;
- (id)credits;
- (void)loadNib;
- (void)sizeCreditsView;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)copyright;
- (void)setOptionsDictionary:(id)a0;
- (void)showInfoPanel:(id)a0;
- (void)sizeCopyrightView;
- (void)unloadNib:(BOOL)a0;
- (void)updateNib;
- (id)versionString;
- (void)windowWillClose:(id)a0;

@end
