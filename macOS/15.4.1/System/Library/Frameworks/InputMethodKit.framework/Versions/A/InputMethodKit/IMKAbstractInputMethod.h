@class NSString, NSArray, NSTimer, NSMutableArray;
@protocol IMKTextDocument, IMKKeyboard, IMKCandidateEngine, IMKInputMethod;

@interface IMKAbstractInputMethod : NSObject <IMKCandidateMenuDelegate, IMKInputMethod, IMKChainable> {
    NSMutableArray *_textDocumentStack;
    NSTimer *_candidateFireTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IMKInputMethod> verbatimInputMethod;
@property (readonly, nonatomic) NSMutableArray *textDocumentMutableStack;
@property (copy, nonatomic) id /* block */ compositionCompletionHandler;
@property (nonatomic) double candidateDelayTimeInterval;
@property (readonly, nonatomic) NSArray *textDocumentStack;
@property (retain, nonatomic) id<IMKInputMethod> composingInputMethod;
@property (readonly, nonatomic) BOOL isComposingInputMethod;
@property (readonly, nonatomic) id<IMKTextDocument> composingText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) BOOL tracksVerbatim;
@property (readonly, nonatomic) BOOL tracksVerbatimAsComposingText;
@property (readonly, nonatomic) NSString *verbatim;
@property (readonly, weak, nonatomic) id<IMKKeyboard> attachedKeyboard;
@property (retain, nonatomic) id<IMKTextDocument> attachedTextDocument;
@property (retain, nonatomic) id<IMKCandidateEngine> candidateEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IMKInputMethod> chainedInputMethod;

+ (id)inputMethod;
+ (id)inputMethodVerbatimChain;
+ (id)inputMethodVerbatimChainWithAttachedKeyboard:(id)a0;
+ (id)inputMethodWithAttachedKeyboard:(id)a0;
+ (id)inputMethodWithChainedInputMethod:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)languageCode;
- (void)commitComposition;
- (BOOL)apply:(id)a0 after:(long long)a1 to:(id)a2;
- (void)candidateMenu:(id)a0 didChangeFocusTo:(id)a1;
- (id)popTextDocument;
- (id)_candidateSeparator;
- (void)_completeComposition:(BOOL)a0;
- (void)alignVerbatimWithComposingText;
- (BOOL)apply:(id)a0 before:(long long)a1 to:(id)a2;
- (BOOL)canHandle:(id)a0 whileInShortcut:(id)a1;
- (BOOL)canShowCandidatesOn:(id)a0;
- (void)cancelActiveCandidateRequest;
- (void)cancelComposition;
- (void)candidateHandled:(id)a0;
- (void)candidateMenu:(id)a0 didSelectCandidate:(id)a1;
- (void)candidateMenuDidFinishInteracting:(id)a0;
- (id)candidateSeparator;
- (void)completeComposition;
- (void)composeText:(id)a0 onCompletion:(id /* block */)a1;
- (void)composeTextWith:(id)a0;
- (BOOL)didAcceptCandidate:(id)a0;
- (void)didAttachTextDocument:(id)a0;
- (BOOL)didPressKey:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)didReleaseKey:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)handleBoundedCandidate:(id)a0;
- (BOOL)handleCandidateRelativeToCursor:(id)a0;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)handleKeyRelease:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)ignoreSeparatorIfApplied;
- (id)initWithInputMethodToChain:(id)a0;
- (id)initWithKeyboardToAttach:(id)a0;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1;
- (BOOL)keyboard:(id)a0 didChange:(id)a1 to:(id)a2;
- (id)newDeferredCandidatesTimerFor:(id)a0 withKeyboardState:(id)a1 withDelay:(double)a2;
- (void)popAttachedTextDocument;
- (void)pushAttachedTextDocument;
- (void)pushTextDocument:(id)a0;
- (void)runShowCandidatesFor:(id)a0 withKeyboardState:(id)a1;
- (void)showCandidatesOnKeyboardFor:(id)a0;
- (void)showCandidatesOnKeyboardFor:(id)a0 withKeyboardState:(id)a1;
- (void)showCandidatesOnKeyboardFor:(id)a0 withKeyboardState:(id)a1 afterDelay:(double)a2;
- (BOOL)trackedVerbatimShouldHandle:(id)a0 whileIn:(id)a1;
- (BOOL)unhandledKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)unhandledKeyRelease:(id)a0 whileInKeyboardState:(id)a1;
- (id)verbatimFromString:(id)a0;
- (void)willAttachTextDocument:(id)a0;

@end
