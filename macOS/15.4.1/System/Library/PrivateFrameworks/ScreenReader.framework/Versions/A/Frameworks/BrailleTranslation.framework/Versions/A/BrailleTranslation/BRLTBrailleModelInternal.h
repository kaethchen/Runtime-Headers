@class NSString, BRLTEditStringInternal;

@interface BRLTBrailleModelInternal : NSObject {
    void /* unknown type, empty encoding */ outputTranslator;
    void /* unknown type, empty encoding */ inputTranslator;
    void /* unknown type, empty encoding */ candidateManager;
    void /* unknown type, empty encoding */ backTranslateLocally;
    void /* unknown type, empty encoding */ editScript;
    void /* unknown type, empty encoding */ wasShowingSecureToken;
    void /* unknown type, empty encoding */ script;
    void /* unknown type, empty encoding */ braille;
    void /* unknown type, empty encoding */ scriptHistory;
    void /* unknown type, empty encoding */ lastScriptOutputTime;
    void /* unknown type, empty encoding */ translationResult;
    void /* unknown type, empty encoding */ brailleSelectionDirty;
    void /* unknown type, empty encoding */ editingScriptRange;
    void /* unknown type, empty encoding */ editingBrailleRange;
    void /* unknown type, empty encoding */ contentLock;
    void /* unknown type, empty encoding */ stageRange;
    void /* unknown type, empty encoding */ showingAlert;
    void /* unknown type, empty encoding */ alertScript;
    void /* unknown type, empty encoding */ alertBraille;
    void /* unknown type, empty encoding */ showingTerminalOutput;
    void /* unknown type, empty encoding */ candidateSelectionLanguage;
    void /* unknown type, empty encoding */ brailleCache;
    void /* unknown type, empty encoding */ wordDescriptionManager;
}

@property (class, nonatomic, readonly) BRLTBrailleModelInternal *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ backTranslateByCell;
@property (nonatomic) void /* unknown type, empty encoding */ technicalMode;
@property (nonatomic) void /* unknown type, empty encoding */ isShowingSecureToken;
@property (nonatomic) void /* unknown type, empty encoding */ editable;
@property (nonatomic) void /* unknown type, empty encoding */ brailleStringDirty;
@property (nonatomic, readonly) BOOL isCandidateSelectionActive;
@property (nonatomic, readonly) BRLTEditStringInternal *displayedScript;
@property (nonatomic, readonly) BRLTEditStringInternal *displayedBraille;
@property (nonatomic, readonly) NSString *bufferBrailleString;
@property (nonatomic) void /* unknown type, empty encoding */ isWordDescriptionActive;

- (id)init;
- (void).cxx_destruct;
- (void)setAlert:(id)a0;
- (void)setScript:(id)a0;
- (void)showPreviousCandidate;
- (BOOL)handleEscape;
- (BOOL)handleReturn;
- (void)selectCandidate;
- (void)_resetForTest;
- (void)forceTranslate;
- (void)handleBrailleDotPress:(id)a0;
- (BOOL)handleBrailleSelectionWithNSSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)handleDeleteWithSilently:(BOOL)a0;
- (void)handleWordDescriptionCommand;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptRangeOfBrailleCellRepresentingCharacterAt:(long long)a0;
- (void)setInputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setOutputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setTerminalOutput:(id)a0;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousWordDescription;

@end
