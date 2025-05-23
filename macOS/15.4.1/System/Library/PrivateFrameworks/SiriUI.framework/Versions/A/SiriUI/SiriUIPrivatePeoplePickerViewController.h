@class NSString, SAABPersonPicker, SiriUIObjectPickerViewController;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (double)desiredHeightForWidth:(double)a0;
- (id)_pickerController;
- (void)_showPicker:(id)a0;
- (void)configureReusableTransparentFooterView:(id)a0;
- (double)desiredHeightForTransparentFooterView;
- (id)initWithSnippet:(id)a0;
- (void)pickerViewController:(id)a0 didSelectObject:(id)a1 fromPicker:(id)a2;
- (void)pickerViewController:(id)a0 willDismissPicker:(id)a1;
- (void)pickerViewController:(id)a0 willPresentPicker:(id)a1;
- (Class)transparentFooterViewClass;
- (id)viewControllerForPickerPresentation:(id)a0;

@end
