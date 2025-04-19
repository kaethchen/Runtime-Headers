@interface AppKit._NSSuggestionListTouchBarController : NSObject <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ touchBar;
}

- (id)init;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)candidateListTouchBarItem:(id)a0 beginSelectingCandidateAtIndex:(long long)a1;
- (void)candidateListTouchBarItem:(id)a0 changeSelectionFromCandidateAtIndex:(long long)a1 toIndex:(long long)a2;
- (void)candidateListTouchBarItem:(id)a0 endSelectingCandidateAtIndex:(long long)a1;

@end
