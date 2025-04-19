@class AutoFillCandidateListBarItemController, NSString, NSCustomTouchBarItem, NSURL, NSTouchBar;
@protocol AutoFillFunctionBarProviderDelegate;

@interface AutoFillFunctionBarProvider : NSObject <AutoFillCandidateListBarItemControllerDelegate, NSTouchBarDelegate, FormAutoFillCompletionControllerObserver, NSTouchBarProvider> {
    struct Vector<WTF::RefPtr<Safari::CompletionListItem>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _currentCompletionListItems;
    NSURL *_currentFormURL;
    NSCustomTouchBarItem *_autoFillLabelFunctionBarItem;
    AutoFillCandidateListBarItemController *_autoFillCandidateListBarItemController;
}

@property (weak, nonatomic) id<AutoFillFunctionBarProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)setTouchBar:(id)a0;
- (id)_autoFillCandidateListBarItemController;
- (id)_autoFillCandidateListFunctionBarItem;
- (id)_candidateBarTextAttributesForMultiLineLabel;
- (id)_candidateBarTextAttributesForSingleLineLabel;
- (id)_textForCreditCardCompletionListItem:(const void *)a0;
- (struct RefPtr<Safari::CompletionListItem, WTF::RawPtrTraits<Safari::CompletionListItem>, WTF::DefaultRefDerefTraits<Safari::CompletionListItem>> { struct CompletionListItem *x0; })candidateListBarItemController:(id)a0 completionListItemForCandidateAtIndex:(unsigned long long)a1;
- (void)candidateListBarItemController:(id)a0 didSelectCandidateAtIndex:(unsigned long long)a1;
- (void)candidateListBarItemController:(id)a0 imageForCandidateAtIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)candidateListBarItemController:(id)a0 labelForCandidateAtIndex:(unsigned long long)a1;
- (BOOL)didShowAutoFillQuickTypeForItem:(const void *)a0;
- (void)formAutoFillController:(id)a0 didRefreshCompletionListItems:(const void *)a1 formURL:(id)a2;
- (void)imageForCompletionListItem:(const void *)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)numberOfCandidatesForCandidateListBarItemController:(id)a0;
- (id)textForCompletionListItem:(const void *)a0;

@end
