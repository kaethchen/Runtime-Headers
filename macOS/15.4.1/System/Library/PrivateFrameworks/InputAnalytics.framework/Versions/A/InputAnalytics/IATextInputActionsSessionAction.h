@class IATextInputActionsSessionKBMenuInteractionAction, IATextInputActionsSessionBeganAction, IATextInputActionsSessionInsertionAction, IATextInputActionsSessionRedoAction, NSString, IATextInputActionsSessionKBMenuAppearAction, IATextInputActionsSessionPasteAction, IATextInputActionsSessionEndAction, IATextInputActionsInputMode, IATextInputActionsSessionGlomojiTapAction, IATextInputActionsSessionDeletionAction, IATextInputActionsSessionCutAction, IATextInputActionsSessionUndoAction, IATextInputActionsSessionKBMenuDismissAction, IATextInputActionsSessionReplaceTextAction, IATextInputActionsSessionCopyAction, IATextInputActionsSessionDictationBeganAction, IATextInputActionsSessionKeyboardDockItemButtonPressAction, IATextInputActionsSessionDictationEndedAction, IATextInputActionsSessionSelectionAction, IATextInputActionsSessionReplaceWithCandidateAction;

@interface IATextInputActionsSessionAction : IAXPCObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } relativeRangeBefore;
@property (readonly, nonatomic) BOOL changedContent;
@property (readonly, nonatomic) BOOL isCapableOfTextInsertion;
@property (nonatomic) long long source;
@property (nonatomic) long long textInputActionsType;
@property (readonly, nonatomic) long long inputActionCount;
@property (nonatomic) unsigned long long insertedTextLength;
@property (nonatomic) unsigned long long insertedEmojiCount;
@property (nonatomic) unsigned long long insertedPunctuationCount;
@property (nonatomic) unsigned long long removedTextLength;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long removedPunctuationCount;
@property (readonly, nonatomic) long long netCharacterCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (nonatomic) unsigned long long largestSingleInsertionLength;
@property (nonatomic) unsigned long long largestSingleDeletionLength;
@property (copy, nonatomic) IATextInputActionsInputMode *inputMode;
@property (copy, nonatomic) NSString *processBundleId;
@property (nonatomic) long long flagOptions;
@property (readonly, nonatomic) IATextInputActionsSessionBeganAction *asBegan;
@property (readonly, nonatomic) IATextInputActionsSessionEndAction *asEnd;
@property (readonly, nonatomic) IATextInputActionsSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) IATextInputActionsSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) IATextInputActionsSessionSelectionAction *asSelection;
@property (readonly, nonatomic) IATextInputActionsSessionCopyAction *asCopy;
@property (readonly, nonatomic) IATextInputActionsSessionCutAction *asCut;
@property (readonly, nonatomic) IATextInputActionsSessionPasteAction *asPaste;
@property (readonly, nonatomic) IATextInputActionsSessionUndoAction *asUndo;
@property (readonly, nonatomic) IATextInputActionsSessionRedoAction *asRedo;
@property (readonly, nonatomic) IATextInputActionsSessionKeyboardDockItemButtonPressAction *asKeyboardDockItemButtonPress;
@property (readonly, nonatomic) IATextInputActionsSessionDictationBeganAction *asDictationBegan;
@property (readonly, nonatomic) IATextInputActionsSessionDictationEndedAction *asDictationEnded;
@property (readonly, nonatomic) IATextInputActionsSessionReplaceTextAction *asReplaceText;
@property (readonly, nonatomic) IATextInputActionsSessionReplaceWithCandidateAction *asReplaceWithCandidate;
@property (readonly, nonatomic) IATextInputActionsSessionGlomojiTapAction *asGlomojiTap;
@property (readonly, nonatomic) IATextInputActionsSessionKBMenuAppearAction *asKBMenuAppear;
@property (readonly, nonatomic) IATextInputActionsSessionKBMenuInteractionAction *asKBMenuInteraction;
@property (readonly, nonatomic) IATextInputActionsSessionKBMenuDismissAction *asKBMenuDismiss;

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldSeparatelyTrackKeystrokesForSource:(long long)a0 type:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isMergeableWith:(id)a0;
- (long long)mergeActionIfPossible:(id)a0;
- (void)setInsertedTextLengthWithoutTracking:(unsigned long long)a0;
- (void)setRemovedTextLengthWithoutTracking:(unsigned long long)a0;

@end
