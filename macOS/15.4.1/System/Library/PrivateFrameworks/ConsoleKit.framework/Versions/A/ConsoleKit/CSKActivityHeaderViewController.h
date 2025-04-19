@class NSString, CSKActivity;

@interface CSKActivityHeaderViewController : CSKHeaderViewController <CSKExtendedTextFieldDelegate>

@property (weak, nonatomic) CSKActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)_updateHeaderViewsWithActivity:(id)a0;
- (void)extendedTextFieldDidSwitch:(id)a0 showsAlternate:(BOOL)a1;

@end
