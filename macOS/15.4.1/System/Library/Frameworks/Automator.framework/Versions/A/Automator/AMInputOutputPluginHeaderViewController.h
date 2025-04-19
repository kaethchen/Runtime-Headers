@class NSTextField, AMInputOutputWorkflowMetadata, AMType, NSPopUpButton, AMApplicationPickerPopUpButton, NSButton;

@interface AMInputOutputPluginHeaderViewController : AMPluginHeaderViewController

@property (weak) AMApplicationPickerPopUpButton *appPopUpButton;
@property (weak) NSPopUpButton *inputPopUpButton;
@property (weak) NSTextField *receivesLabel;
@property (weak) NSTextField *inLabel;
@property (weak) NSTextField *inputProcessingLabel;
@property (weak) NSPopUpButton *inputProcessingPopUpButton;
@property (weak) NSButton *replacesButton;
@property (readonly, nonatomic) AMInputOutputWorkflowMetadata *_inputOutputWorkflowMetaData;
@property (retain, nonatomic) AMType *_guessedAutomaticInputType;
@property (nonatomic) BOOL _updatingAutomaticInputType;
@property BOOL stateOfOutputCheckboxWhenLastEnabled;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)setWorkflow:(id)a0;
- (id)_applicationURLsToShow;
- (id)_inputTypeMenuForApplicationsWithBundleIDs:(id)a0;
- (id)_receivesLabelText;
- (void)_setupControls;
- (BOOL)_shouldEnableReplaceSelectedCheckbox;
- (void)_updateAppPopUpButton;
- (void)_updateApplicationURLs:(id)a0;
- (void)_updateGuessedAutomaticInputType;
- (void)_updateInputPopUpButtonSelection;
- (void)_updateInputTypeMenu;
- (void)inputPopUpButtonChanged:(id)a0;
- (id)receivesLabelTextForInputType:(id)a0;
- (void)updateReplaceSelectedCheckbox:(id)a0;

@end
