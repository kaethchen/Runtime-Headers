@class NSButton, NSString, STCoreUsersController;

@interface STScreenTimeCommunicationViewController : NSViewController <STProtectedControlDelegate>

@property (retain) NSButton *everyoneRadioButton;
@property (retain) NSButton *groupsWithOneContactRadioButton;
@property (retain) NSButton *contactsOnlyRadioButton;
@property (readonly, nonatomic) NSString *contactsOnlyTooltips;
@property (readonly, nonatomic) NSString *communicationDescription;
@property (retain) STCoreUsersController *representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingCommunicationDescription;
+ (id)keyPathsForValuesAffectingContactsOnlyTooltips;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_validateRadioButtonState;
- (void)actionCancelledForControl:(id)a0;
- (void)chooseRadioButton:(id)a0;

@end
