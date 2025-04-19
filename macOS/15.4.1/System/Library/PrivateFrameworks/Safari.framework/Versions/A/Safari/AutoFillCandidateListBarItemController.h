@class NSTouchBarItem, NSString, NSCandidateListTouchBarItem;
@protocol AutoFillCandidateListBarItemControllerDelegate;

@interface AutoFillCandidateListBarItemController : NSObject <NSCandidateListTouchBarItemDelegate> {
    NSString *_itemIdentifier;
    NSCandidateListTouchBarItem *_item;
}

@property (weak, nonatomic) id<AutoFillCandidateListBarItemControllerDelegate> delegate;
@property (readonly, nonatomic) NSTouchBarItem *barItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)candidateListTouchBarItem:(id)a0 endSelectingCandidateAtIndex:(long long)a1;
- (BOOL)_shouldPrioritizeLastCandidate;
- (void)refreshCandidatesWithCompletionHandler:(id /* block */)a0;

@end
