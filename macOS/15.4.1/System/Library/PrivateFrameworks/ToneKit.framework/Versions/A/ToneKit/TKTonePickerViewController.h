@class NSString, NSResponder, TKTonePickerController;
@protocol TKTonePickerContentViewController, TKTonePickerViewControllerDelegate;

@interface TKTonePickerViewController : NSViewController <TKTonePickerContentViewControllerDelegate, TKTonePickerViewDelegate> {
    TKTonePickerController *_tonePickerController;
    id<TKTonePickerContentViewController> _tonePickerContentViewController;
    BOOL _isMonitoringHostingWindowClosing;
}

@property (readonly, nonatomic) long long alertType;
@property (copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL showsDefault;
@property (copy, nonatomic) NSString *defaultToneIdentifier;
@property (nonatomic) BOOL showsNone;
@property (nonatomic, getter=isNoneAtTop) BOOL noneAtTop;
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (weak, nonatomic) id<TKTonePickerViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSResponder *tonePickerResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_tonePickerContentViewControllerClassForStyle:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)stopTonePreview;
- (id)initWithAlertType:(long long)a0 style:(unsigned long long)a1;
- (void)_beginMonitoringHostingWindowWillClose;
- (void)_endMonitoringHostingWindowWillClose;
- (void)_hostingWindowWillClose:(id)a0;
- (void)tonePickerContentViewController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (id)viewForBaselineLayoutOfTonePickerView:(id)a0;
- (id)viewForSizingTonePickerView:(id)a0;

@end
