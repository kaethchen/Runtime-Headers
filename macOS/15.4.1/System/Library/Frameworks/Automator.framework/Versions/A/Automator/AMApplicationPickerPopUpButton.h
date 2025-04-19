@class NSArray;

@interface AMApplicationPickerPopUpButton : NSPopUpButton

@property (readonly, copy, nonatomic) NSArray *_cleanedUpChosenURLs;
@property (readonly, copy, nonatomic) NSArray *_cleanedUpCustomURLs;
@property (copy, nonatomic) NSArray *chosenURLs;
@property (copy, nonatomic) NSArray *customURLs;

+ (id)_displayNameForURL:(id)a0;
+ (id)_applicationURLsFromPasteboard:(id)a0;
+ (id)_cleanedUpURLs:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (void)_commonInit;
- (void)concludeDragOperation:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performDragOperation:(id)a0;
- (void)_updateMenu;
- (void)_resetSelection;
- (void)_addURLs:(id)a0;
- (void)_toggleURL:(id)a0;
- (void)_updateToolTip;
- (unsigned long long)_validateDrag:(id)a0;
- (void)chooseCustomTitle:(id)a0;
- (void)chooseItem:(id)a0;
- (void)choosePlaceholder:(id)a0;
- (void)chooseURLViaOpenPanel:(id)a0;

@end
