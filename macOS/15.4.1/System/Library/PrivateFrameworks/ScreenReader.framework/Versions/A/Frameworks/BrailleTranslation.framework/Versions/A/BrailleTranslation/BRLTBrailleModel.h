@class BRLTBrailleModelInternal;

@interface BRLTBrailleModel : NSObject

@property (readonly) BRLTBrailleModelInternal *underlyingObject;

+ (id)sharedModel;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)setAlert:(id)a0;
- (void)setEditable:(BOOL)a0;
- (void)setScript:(id)a0;
- (BOOL)editable;
- (BOOL)handleDelete;
- (void)showPreviousCandidate;
- (id)initWithUnderlyingObject:(id)a0;
- (BOOL)handleEscape;
- (BOOL)handleReturn;
- (id)displayedScript;
- (void)_resetForTest;
- (BOOL)brailleStringDirty;
- (id)bufferBrailleString;
- (id)displayedBraille;
- (void)forceTranslate;
- (void)handleBrailleDotPress:(id)a0;
- (BOOL)handleBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)handleDeleteSilently;
- (void)handleWordDescriptionCommand;
- (BOOL)isCandidateSelectionActive;
- (BOOL)isWordDescriptionActive;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(long long)a0;
- (void)setBackTranslateByCell:(BOOL)a0;
- (void)setInputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setIsShowingSecureToken:(BOOL)a0;
- (void)setOutputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setTechnicalMode:(BOOL)a0;
- (void)setTerminalOutput:(id)a0;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousWordDescription;
- (BOOL)technicalMode;

@end
