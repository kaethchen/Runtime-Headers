@class NSTextInputContext, NSView, NSString, NSTouchBar, NSCandidateListTouchBarItem;
@protocol NSTextInputClient;

@interface NSBridgedTextTouchBarController : NSObject <NSTouchBarDelegate, NSCandidateListTouchBarItemDelegate>

@property (weak) NSTextInputContext *textInputContext;
@property (weak) NSView<NSTextInputClient> *inputView;
@property (retain) NSTouchBar *touchBar;
@property long long spellCheckerDocumentTag;
@property BOOL pendingCandidateUpdate;
@property unsigned long long candidateSequenceNumber;
@property (copy) NSString *lastCandidateString;
@property (retain) NSCandidateListTouchBarItem *candidateListItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_setupCandidateListTouchBarItem;
- (void)_configureTouchBar:(id)a0 withIdentifiers:(id)a1;
- (void)_quickTypeDidChange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForUserCompletion;
- (id)_touchBarItemIdentifiers;
- (void)candidateListTouchBarItem:(id)a0 changedCandidateListVisibility:(BOOL)a1;
- (void)candidateListTouchBarItem:(id)a0 endSelectingCandidateAtIndex:(long long)a1;
- (id)currentStringFromTextInputContext;
- (void)displayTextTouchBar;
- (void)handleCandidates:(id)a0 sequenceNumber:(long long)a1;
- (id)initWithTextInputContext:(id)a0;
- (void)insertCandidateString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromTextCheckingResult:(BOOL)a2;
- (void)insertCandidateTextCheckingResult:(id)a0;
- (void)removeTextTouchBar;
- (unsigned long long)textCheckingTypesForCurrentPreferences;
- (void)updateCandidates;
- (unsigned long long)updateTextCheckingTypes:(unsigned long long)a0 forInputTraits:(id)a1;

@end
