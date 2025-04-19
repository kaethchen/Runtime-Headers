@class CNContactViewTouchBar, CNContact, NSString, NSTouchBar, NSButton, CNContactEditViewTouchBar;
@protocol CNFunctionBarControllerDelegate;

@interface CNFunctionBarController : NSObject <CNContactViewTouchBarDelegate, CNContactEditViewTouchBarDelegate, NSTouchBarProvider>

@property (weak) id<CNFunctionBarControllerDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) CNContactViewTouchBar *contactViewTouchBar;
@property (retain) CNContactEditViewTouchBar *contactEditViewTouchBar;
@property (retain) NSButton *editButton;
@property (retain) NSButton *shareButton;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)addField:(id)a0;
- (BOOL)canEditContact;
- (void)createNewContact;
- (void)createNewGroup;
- (void)doneButtonPressed;
- (id)initWithDelegate:(id)a0 userActionListDataSource:(id)a1;
- (void)toggleCardEditingMode;
- (void)updateFunctionBar;

@end
