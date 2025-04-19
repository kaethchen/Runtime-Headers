@class NSString, PXSharedLibraryParticipantTableViewController, PXSharedLibraryAssistantParticipantViewModel, PXSharedLibraryAssistantViewModel;

@interface PXSharedLibraryAssistantParticipantViewController : PXAssistantTemplateViewController <PXSharedLibraryParticipantSearchControllerDelegate, PXChangeObserver> {
    PXSharedLibraryParticipantTableViewController *_tableViewController;
}

@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *assistantViewModel;
@property (readonly, nonatomic) PXSharedLibraryAssistantParticipantViewModel *participantViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateButtonItems;
- (void)commitSharedLibraryParticipantsForSearchController:(id)a0;
- (id)initWithAssistantViewModel:(id)a0 participantViewModel:(id)a1;
- (void)thirdButtonAction:(id)a0;

@end
