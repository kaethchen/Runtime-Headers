@class BRLTJEditableStringInternal, BRLTJBrailleStringInternal;

@interface BRLTJBrailleStateManagerInternal : NSObject {
    void /* unknown type, empty encoding */ outputMode;
    void /* unknown type, empty encoding */ inputMode;
    void /* unknown type, empty encoding */ script;
    void /* unknown type, empty encoding */ braille;
    void /* unknown type, empty encoding */ notifier;
    void /* unknown type, empty encoding */ translator;
    void /* unknown type, empty encoding */ brailleForScriptTranslationResult;
    void /* unknown type, empty encoding */ candidateSelectionLanguage;
    void /* unknown type, empty encoding */ candidateManager;
    void /* unknown type, empty encoding */ brailleCache;
    void /* unknown type, empty encoding */ stageScriptForStageResult;
    void /* unknown type, empty encoding */ alertScript;
    void /* unknown type, empty encoding */ alertBraille;
    void /* unknown type, empty encoding */ wordDescriptionManager;
}

@property (class, nonatomic, readonly) BRLTJBrailleStateManagerInternal *manager;

@property (nonatomic, readonly) BOOL isEditing;
@property (nonatomic, readonly) BOOL isCandidateSelectionActive;
@property (nonatomic) void /* unknown type, empty encoding */ isShowingAlert;
@property (nonatomic, readonly) BRLTJEditableStringInternal *displayedScript;
@property (nonatomic, readonly) BRLTJBrailleStringInternal *displayedBraille;
@property (nonatomic) void /* unknown type, empty encoding */ isWordDescriptionActive;
@property (nonatomic) void /* unknown type, empty encoding */ isShowingTerminalOutput;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)delete;
- (void)setScript:(id)a0;
- (void)showPreviousCandidate;
- (void)selectCandidate;
- (void)escapeCommand;
- (BOOL)forwardDelete;
- (void)insertBrailleChar:(long long)a0;
- (BOOL)returnCommand;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setTranslationDelegate:(id)a0 outputMode:(unsigned long long)a1 inputMode:(unsigned long long)a2 candidateSelectionLanguage:(id)a3;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousWordDescription;
- (void)startCandidateSelection;
- (void)wordDescriptionCommand;

@end
