@class NSHashTable, WFModuleSummaryTemplateBuilder, NSArray, NSString, NSSet, NSMutableDictionary, NSDictionary, WFSlotTemplateView, WFModuleSummaryEditor, WFSlotIdentifier, WFVariable;
@protocol WFVariableProvider, WFModuleSummaryCoordinatorDelegate, WFEditorAuxiliaryViewPresenter, WFVariableUIDelegate;

@interface WFModuleSummaryCoordinator : NSObject <WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate, WFVariableUIDelegate, WFParameterEventObserver>

@property (copy, nonatomic) NSArray *contents;
@property (copy, nonatomic) NSSet *parameters;
@property (retain, nonatomic) NSMutableDictionary *mutableStagedParameterStates;
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor;
@property (retain, nonatomic) WFSlotIdentifier *currentlyEditingSlotIdentifier;
@property (retain, nonatomic) WFSlotIdentifier *currentlyTypingSlotIdentifier;
@property (retain, nonatomic) WFModuleSummaryTemplateBuilder *templateBuilder;
@property (retain, nonatomic) WFVariable *variableBeingEdited;
@property (retain, nonatomic) NSHashTable *variablesBeingObserved;
@property (readonly, copy, nonatomic) NSString *summaryFormatString;
@property (readonly, copy, nonatomic) NSSet *editableParameters;
@property (readonly, copy, nonatomic) NSDictionary *parameterStates;
@property (readonly, copy, nonatomic) NSDictionary *stagedParameterStates;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL processing;
@property (weak, nonatomic) id<WFModuleSummaryCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic) id<WFEditorAuxiliaryViewPresenter> auxiliaryViewPresenter;
@property (nonatomic) BOOL allowsPickingVariables;
@property (retain, nonatomic) WFSlotTemplateView *templateView;
@property (nonatomic) BOOL currentEditorIsEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateVariableAttachmentsInContents:(id)a0 withBlock:(id /* block */)a1;
+ (double)heightForWidth:(double)a0 withSummaryFormatString:(id)a1 parameters:(id)a2 editableParameters:(id)a3 parameterStates:(id)a4 stagedParameterStates:(id)a5 horizontalPadding:(double)a6 font:(id)a7 unpopulatedFont:(id)a8 textAlignment:(long long)a9;
+ (id)parameterStatesByApplyingStaging:(id)a0 toOriginal:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)parameterForKey:(id)a0;
- (void)parameterAttributesDidChange:(id)a0;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)updateTemplateContentsAnimated:(BOOL)a0;
- (id)addElementToArrayForParameterKey:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 fromTextAttachment:(id)a1;
- (void)commitParameterState:(id)a0 forKey:(id)a1;
- (id)createSummaryEditorForSlotWithIdentifier:(id)a0;
- (id)currentParameterStateForParameterKey:(id)a0;
- (void)destroyCurrentEditor;
- (Class)editorClassForParameter:(id)a0;
- (id)firstSlotIdentifierWithParameterKey:(id)a0;
- (id)initialStateForSummaryEditor:(id)a0;
- (void)menuDidDismissInSlotTemplateView:(id)a0;
- (id)menuForTypingInSlotTemplateView:(id)a0;
- (id)presentationAnchorForSlotWithIdentifier:(id)a0;
- (void)removeElementFromArrayAtIndex:(unsigned long long)a0 forParameterKey:(id)a1;
- (void)revealAction:(id)a0 preScrollHandler:(id /* block */)a1 goBackHandler:(id /* block */)a2 scrolledAwayHandler:(id /* block */)a3;
- (void)setSummaryFormatString:(id)a0 withParameters:(id)a1 editableParameters:(id)a2 parameterStates:(id)a3;
- (void)showActionOutputPickerAllowingShortcutInput:(BOOL)a0 variableProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)showParameterEditingHint:(id)a0;
- (void)showVariableEditorWithOptions:(id)a0 fromSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)slotTemplateView:(id)a0 deletePressedOnSlotWithIdentifier:(id)a1 allowResettingValue:(BOOL)a2;
- (void)slotTemplateView:(id)a0 didChangeText:(id)a1 forSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 didDeselectSlotWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)slotTemplateView:(id)a0 didEndTypingInSlotWithIdentifier:(id)a1;
- (void)slotTemplateView:(id)a0 didSelectSlotWithIdentifier:(id)a1;
- (void)slotTemplateView:(id)a0 didTapTextAttachment:(id)a1 inSlotWithIdentifier:(id)a2;
- (id)slotTemplateView:(id)a0 menuForSlotIdentifier:(id)a1 style:(unsigned long long)a2;
- (BOOL)slotTemplateView:(id)a0 shouldChangeText:(id)a1 forSlotWithIdentifier:(id)a2;
- (BOOL)slotTemplateView:(id)a0 shouldTapTextAttachment:(id)a1 inSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 typingDidCopyWithOriginalBlock:(id /* block */)a1;
- (void)slotTemplateView:(id)a0 typingDidCutWithOriginalBlock:(id /* block */)a1;
- (void)slotTemplateView:(id)a0 typingDidPasteWithOriginalBlock:(id /* block */)a1;
- (BOOL)slotTemplateView:(id)a0 typingDoCommandBySelector:(SEL)a1;
- (void)slotTemplateView:(id)a0 willBeginTypingInSlotWithIdentifier:(id)a1 usingTextEntry:(id)a2 allowMultipleLines:(BOOL *)a3;
- (void)slotTemplateViewDidInvalidateSize:(id)a0;
- (void)summaryEditor:(id)a0 didCommitAuxiliaryParameterState:(id)a1 forKey:(id)a2;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didRequestEditingSlotWithIdentifier:(id)a1;
- (void)summaryEditor:(id)a0 didStageParameterState:(id)a1;
- (void)summaryEditor:(id)a0 willUpdateVariable:(id)a1;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (id)transformParameterStateForSerialization:(id)a0 arrayIndex:(unsigned long long)a1 parameter:(id)a2;
- (void)updateVariableObservationsWithContents:(id)a0;
- (void)variableDidChange:(id)a0;

@end
