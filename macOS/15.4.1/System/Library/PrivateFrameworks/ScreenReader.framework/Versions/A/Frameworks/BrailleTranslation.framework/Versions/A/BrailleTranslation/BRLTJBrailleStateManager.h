@class BRLTJBrailleStateManagerInternal, BRLTJEditableString, BRLTJBrailleString;

@interface BRLTJBrailleStateManager : NSObject

@property (readonly) BRLTJBrailleStateManagerInternal *underlyingObject;
@property (nonatomic) BOOL isShowingAlert;
@property (nonatomic) BOOL isShowingTerminalOutput;
@property (readonly, nonatomic) BRLTJEditableString *displayedScript;
@property (readonly, nonatomic) BRLTJBrailleString *displayedBraille;

+ (id)manager;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)isEditing;
- (BOOL)delete;
- (void)setScript:(id)a0;
- (void)showPreviousCandidate;
- (id)initWithUnderlyingObject:(id)a0;
- (void)selectCandidate;
- (void)escapeCommand;
- (BOOL)forwardDelete;
- (void)insertBrailleChar:(id)a0;
- (BOOL)isCandidateSelectionActive;
- (BOOL)isWordDescriptionActive;
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
