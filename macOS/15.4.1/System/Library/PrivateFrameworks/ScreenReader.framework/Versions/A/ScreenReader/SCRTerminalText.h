@class NSString;

@interface SCRTerminalText : SCRStandardText

@property (nonatomic, setter=_setRegisteredTerminalNewPromptLineNotification:) BOOL _registeredTerminalNewPromptLineNotification;
@property (nonatomic, setter=_setRegisteredTerminalLineReplacedNotification:) BOOL _registeredTerminalLineReplacedNotification;
@property (copy, nonatomic, setter=_setPrompt:) NSString *_prompt;
@property (retain, nonatomic) NSString *_cachedVisibleString;

+ (BOOL)_insertionPointMovedLeftWithSelectionRange:(id)a0 previousSelectionRange:(id)a1;
+ (BOOL)_wasCharacterReplacedWithWhiteSpaceInVisibleString:(id)a0 cachedString:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)supportsLineNavigationFallbacks;
- (void)_cacheStatesAfterEchoForSelectionRange:(id)a0 marker:(id)a1;
- (BOOL)_checkDeletedCharacterByInsertingSpaceAndMovingCursorBack;
- (id)_compareAndFindDifferenceBetweenOldAndNewVisibleString;
- (id)_diffBetweenString:(id)a0 newText:(id)a1 foward:(BOOL)a2;
- (void)_echoTerminalContentRange:(id)a0 withSelection:(id)a1 forRequest:(id)a2;
- (void)_echoTerminalLineReplaced:(id)a0;
- (void)_echoTerminalNewPromptLine:(id)a0;
- (BOOL)_isAlmostEqualWithNewText:(id)a0 oldText:(id)a1;
- (void)_removeTerminalObservers;
- (BOOL)_shouldEchoTerminalContent;
- (BOOL)_shouldOutputAsLogging:(id)a0;
- (id)_visibleString;
- (BOOL)canHandleEchoContentChange;
- (id)defaultExcludedQueueIdentifiersForContentChange;
- (void)handleContentChangeWithUserInfo:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (BOOL)ignoreContentChangeWhenSelectionChangeIsLarger;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)shouldAnnounceCharacterAsDeleted:(id)a0;
- (BOOL)shouldSuppressTextAttributesEcho;
- (void)synchKeyboardCursorToPosition:(id)a0;

@end
