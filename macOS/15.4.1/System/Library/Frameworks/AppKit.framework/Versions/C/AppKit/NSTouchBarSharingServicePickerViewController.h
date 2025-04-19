@class NSStackView, NSSharingServicePicker;
@protocol NSSharingServicePickerTouchBarItemDelegate;

@interface NSTouchBarSharingServicePickerViewController : NSViewController {
    NSSharingServicePicker *_picker;
    NSStackView *_stackView;
}

@property (weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_loadContents;
- (void)_showAppExtensionsPref:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;
- (void)viewWillAppear;

@end
