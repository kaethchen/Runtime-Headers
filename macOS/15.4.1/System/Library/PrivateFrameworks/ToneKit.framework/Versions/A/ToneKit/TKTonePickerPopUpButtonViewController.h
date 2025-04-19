@class TKTonePickerController, NSString, NSView, NSResponder, TKPickerPopUpButton;
@protocol TKTonePickerContentViewControllerDelegate;

@interface TKTonePickerPopUpButtonViewController : NSViewController <TKTonePickerControllerDelegate, NSMenuItemValidation, TKTonePickerContentViewController> {
    TKPickerPopUpButton *_popUpButton;
    TKTonePickerController *_tonePickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TKTonePickerContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSView *tonePickerContentView;
@property (readonly, nonatomic) NSResponder *tonePickerResponder;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)validateMenuItem:(id)a0;
- (void)_tonePickerMenuItemWasSelected:(id)a0;
- (void)_invalidatePopUpButtonMenu;
- (void)_reloadPopUpButtonMenu;
- (void)_tonePickerSectionMenuItemWasSelected:(id)a0;
- (id)initWithTonePickerController:(id)a0;
- (void)tonePickerController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (void)tonePickerControllerDidReloadTones:(id)a0;

@end
