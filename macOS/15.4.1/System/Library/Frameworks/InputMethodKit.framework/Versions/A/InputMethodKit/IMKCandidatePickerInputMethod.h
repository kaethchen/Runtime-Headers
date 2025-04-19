@class NSNumber, NSString, IMKCandidateList;

@interface IMKCandidatePickerInputMethod : IMKAbstractInputMethod <IMKCandidateMenuDelegate>

@property (readonly, nonatomic) IMKCandidateList *candidateList;
@property (retain, nonatomic) NSNumber *attachedTextDocumentWasShowingWithMarking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputMethodWithAttachedKeyboard:(id)a0 candidates:(id)a1;

- (void).cxx_destruct;
- (void)candidateMenu:(id)a0 didChangeFocusTo:(id)a1;
- (void)candidateMenu:(id)a0 didSelectCandidate:(id)a1;
- (void)candidateMenuDidFinishInteracting:(id)a0;
- (void)didAttachTextDocument:(id)a0;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1 candidates:(id)a2;
- (void)reflectCandidatesInTouchBar;
- (void)willAttachTextDocument:(id)a0;

@end
