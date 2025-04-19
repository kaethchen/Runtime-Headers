@class NSSet, NSString;

@interface CloseSelectedTabsContext : NSObject <MultipleTabClosingContext>

@property (readonly, nonatomic) NSSet *selectedTabs;
@property (readonly, copy, nonatomic) NSString *undoActionName;
@property (readonly, nonatomic) long long pageUnloadReason;
@property (readonly, copy, nonatomic) NSString *unsavedEditedTextConfirmationPromptTitle;
@property (readonly, copy, nonatomic) NSString *unsavedEditedTextConfirmationPromptActionButtonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSelectedTabs:(id)a0;
- (id)tabToSelectAfterClosingTabsInBrowserWindowController:(id)a0;
- (id)tabsToCloseInBrowserWindowController:(id)a0;
- (id)unsavedEditedTextConfirmationPromptDescriptionWithFirstEditedTabName:(id)a0 editedTabCount:(unsigned long long)a1;

@end
