@class IMKKeyboard, IMKAppleSpellCandidateEngine, IMKKeyboardService, IMKTextDocumentTextInputAdaptor;

@interface IMKKeyboardInputController : IMKInputController

@property (nonatomic, getter=isDeactivating) BOOL deactivating;
@property (readonly, nonatomic) IMKKeyboardService *keyboardService;
@property (retain, nonatomic) IMKTextDocumentTextInputAdaptor *textDocument;
@property (readonly, nonatomic) IMKKeyboard *keyboard;
@property (readonly, nonatomic) IMKAppleSpellCandidateEngine *candidateEngine;
@property (nonatomic) BOOL useMarkedText;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)menu;
- (void)activateServer:(id)a0;
- (void)commitComposition:(id)a0;
- (void)deactivateServer:(id)a0;
- (void)setValue:(id)a0 forTag:(long long)a1 client:(id)a2;
- (id)candidateControllerForTouchBar;
- (id)documentFor:(id)a0 traits:(id)a1 candidateMenu:(id)a2;
- (id)functionRowItemTextInputViewController;
- (BOOL)handleEvent:(id)a0 client:(id)a1;
- (void)handleIMKCandidateSelection:(id)a0;
- (BOOL)isCurrentSender:(id)a0;
- (void)setRemotePropertyAccess:(BOOL)a0;
- (void)setupCandidateEngineForSender:(id)a0;
- (void)setupDocumentForSender:(id)a0;
- (void)setupForSender:(id)a0 onlyForNewSenders:(BOOL)a1;

@end
