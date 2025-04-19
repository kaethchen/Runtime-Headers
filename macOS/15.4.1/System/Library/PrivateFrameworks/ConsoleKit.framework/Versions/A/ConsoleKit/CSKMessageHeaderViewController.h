@class NSString, CSKMessage;

@interface CSKMessageHeaderViewController : CSKHeaderViewController <CSKExtendedTextFieldDelegate>

@property (weak, nonatomic) CSKMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)_updateHeaderViewsWithMessage:(id)a0;
- (void)extendedTextFieldDidSwitch:(id)a0 showsAlternate:(BOOL)a1;

@end
