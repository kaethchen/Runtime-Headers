@class NSTextField, NSString, NSDictionary, NSArray, NSView, NSButton, NSTokenField;
@protocol iCloudAddFamilyMemberDelegate;

@interface iCloudAddFamilyMember : NSObject <NSTokenFieldDelegate> {
    NSView *_addMemberView;
    NSTextField *_addFamilMemberLabel;
    NSTextField *_enterFamilyLabel;
    NSTextField *_createNewLabel;
    NSTokenField *_enterFamilyToken;
    NSButton *_enterFamilyButton;
    NSButton *_createNewButton;
    NSView *_addMemberNoChildView;
    NSTokenField *_addMemberNoChildEnterFamilyToken;
    NSTextField *_addMemberNoChildAddFamilMemberLabel;
    NSTextField *_addMemberNoChildEnterFamilyLabel;
}

@property (retain) NSString *accountID;
@property (retain) NSDictionary *membershipInfo;
@property (retain) NSArray *matches;
@property (retain) NSArray *matchingTokens;
@property int viewType;
@property id<iCloudAddFamilyMemberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (id)initWithAccountID:(id)a0;
- (void)resetSelections;
- (id)addMemberView;
- (void)createNewButtonPressed:(id)a0;
- (id)emailAddressOfAddFamily;
- (void)enterFamilyButtonPressed:(id)a0;
- (id)inviteeMembershipInfo;
- (id)inviteeObject;
- (BOOL)isAddFamilySelected;
- (BOOL)isValidEmail:(id)a0;
- (void)setEnterFamilyButtonLabel:(id)a0;

@end
