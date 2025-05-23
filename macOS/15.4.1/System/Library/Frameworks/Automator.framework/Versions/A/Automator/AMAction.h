@class NSMutableDictionary, _AMVariableActionTarget, NSDate, NSDictionary, NSBundle, NSMutableArray, AMActionCompletionResults, NSImage, NSString, NSSet, AMWorkflow, NSAttributedString, NSArray, NSView, NSNumber, _AMActionAuxiliary, NSError;
@protocol AMVariableControllerProtocol, AMActionDelegate, AMActionRunnerProtocol;

@interface AMAction : NSObject {
    NSDictionary *_argumentsWithOutlets;
    NSString *_currentInput;
    NSString *_error;
    id _currentRunner;
    NSString *_actionDescription;
    BOOL _showsRelevance;
    id _future;
    id _future2;
    id _future3;
    id _future4;
}

@property (class, readonly, nonatomic) BOOL supportsRuntimeParameters;

@property (retain, nonatomic) NSString *_output;
@property (weak, nonatomic) AMAction *loopParent;
@property (weak, nonatomic) id<AMVariableControllerProtocol> _variableController;
@property (retain, nonatomic) _AMVariableActionTarget *_variableActionTarget;
@property (retain, nonatomic) NSMutableDictionary *_definition;
@property (readonly, nonatomic) _AMActionAuxiliary *_auxiliaryStorage;
@property (weak, nonatomic) AMWorkflow *workflow;
@property (weak, nonatomic) id<AMActionDelegate> _delegate;
@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSImage *_icon;
@property (retain, nonatomic) NSImage *largeIcon;
@property (retain, nonatomic) NSImage *_largeIcon;
@property (readonly, nonatomic) NSString *iconPath;
@property (weak, nonatomic) id<AMActionRunnerProtocol> runner;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic, getter=isDeprecated, setter=_setIsDeprecated:) BOOL deprecated;
@property (nonatomic, getter=isDisabled, setter=setDisabled:) BOOL disabled;
@property (nonatomic, getter=isCollapsed, setter=setCollapsed:) BOOL collapsed;
@property (readonly, nonatomic) BOOL hasValueForCollapsed;
@property (readonly, copy, nonatomic) NSMutableDictionary *_definitionForPasteboard;
@property (readonly, nonatomic) NSArray *unlocalizedApplications;
@property (retain, nonatomic) NSArray *keywords;
@property (readonly, copy, nonatomic) NSDictionary *warningDictionary;
@property (retain, nonatomic) NSArray *requiredResources;
@property (retain, nonatomic) NSArray *resourceFailures;
@property (readonly, nonatomic) BOOL hasResourceFailures;
@property (readonly, nonatomic) BOOL hasView;
@property (readonly, nonatomic) BOOL isViewLoaded;
@property (readonly, nonatomic) NSView *view;
@property (readonly, nonatomic) BOOL hasOutput;
@property (nonatomic) BOOL hasBeenRun;
@property (readonly, nonatomic) NSMutableArray *inputConnectionPoints;
@property (readonly, nonatomic) NSMutableArray *outputConnectionPoints;
@property (nonatomic) unsigned long long relevance;
@property (readonly, nonatomic) NSNumber *relevanceAsNSNumber;
@property (retain, nonatomic) NSDate *dateAdded;
@property (nonatomic) unsigned long long useCount;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *UUID;
@property (readonly, nonatomic, getter=isGenericAction) BOOL genericAction;
@property (readonly, nonatomic, getter=_isPassThroughAction) BOOL _passThroughAction;
@property (nonatomic, getter=isCustomAction, setter=setCustomAction:) BOOL customAction;
@property (retain, nonatomic) NSDictionary *providesDictionary;
@property (readonly, nonatomic) NSString *providesContainer;
@property (readonly, nonatomic) NSArray *_providesTypes;
@property (readonly, copy, nonatomic) NSSet *outputTypeNames;
@property (readonly, nonatomic) BOOL providesOutput;
@property (readonly, nonatomic) NSAttributedString *richTextOutput;
@property (readonly, nonatomic) unsigned long long countOfOutput;
@property (readonly, nonatomic) NSMutableArray *outputAsArrayOfResultsItems;
@property (readonly, nonatomic) BOOL hasOutputAsArrayOfResultsItems;
@property (retain, nonatomic) NSDictionary *acceptsDictionary;
@property (readonly, nonatomic) NSArray *_acceptsTypes;
@property (readonly, copy, nonatomic) NSArray *_acceptsTypesOrSelectedInputType;
@property (readonly, nonatomic) NSString *acceptsContainer;
@property (readonly, copy, nonatomic) NSSet *inputTypeNames;
@property (readonly, nonatomic) BOOL acceptsInput;
@property (readonly, nonatomic) BOOL canIgnoreInput;
@property (nonatomic) BOOL ignoresInput;
@property (readonly, nonatomic) BOOL hasGenericInputType;
@property (readonly, nonatomic) BOOL hasGenericOutputType;
@property (nonatomic) long long conversionLabel;
@property (readonly, nonatomic) NSDictionary *arguments;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (retain, nonatomic) NSMutableDictionary *runtimeParameters;
@property (retain, nonatomic) NSMutableDictionary *parameterProperties;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } errorRange;
@property (retain, nonatomic) NSString *errorString;
@property (retain, nonatomic) NSNumber *errorNumber;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) AMActionCompletionResults *completionResults;
@property (readonly, nonatomic) BOOL _allowsDarkAppearance;
@property (readonly, copy, nonatomic) NSArray *applications;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic) NSError *loadingError;
@property (readonly, nonatomic) BOOL canShowWhenRun;
@property (readonly, nonatomic) BOOL canShowSelectedItemsWhenRun;
@property (nonatomic) BOOL showWhenRun;
@property (nonatomic) BOOL showOnlySelectedItemsWhenRun;
@property (retain, nonatomic) NSArray *selectedShowWhenRunItemNames;
@property (readonly, nonatomic) NSArray *allShowWhenRunItems;
@property (readonly, nonatomic) NSArray *showWhenRunItemsForEditing;
@property (readonly, nonatomic) NSArray *selectedShowWhenRunItems;
@property (retain, nonatomic) NSArray *customActionVariablePropertyLists;
@property (readonly, nonatomic) BOOL containsVariables;
@property (readonly, weak, nonatomic) id<AMVariableControllerProtocol> variableController;
@property (retain, nonatomic) NSString *selectedInputType;
@property (retain, nonatomic) NSString *selectedOutputType;
@property double progressValue;
@property (retain, nonatomic) id output;
@property (readonly, nonatomic, getter=isStopped) BOOL stopped;

+ (BOOL)checkCustomActionsDirectoryOnDisk;
+ (id)pasteboardPropertyListForActionOrProxyAction:(id)a0 allowDefaultDefinitionFallback:(BOOL)a1 error:(id *)a2;
+ (BOOL)writeCustomActionToDiskWithProperties:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)pause;
- (void)reset;
- (void)_reset;
- (void)stop;
- (BOOL)control:(id)a0 isValidObject:(id)a1;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 menuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (void)closed;
- (id)definition;
- (void)updateParameters;
- (id)descriptionDictionary;
- (void)_stop;
- (id)categories;
- (void)_activated;
- (void)setCategories:(id)a0;
- (void)_stop:(id)a0;
- (void)activated;
- (void)setApplications:(id)a0;
- (void)_updateParameters;
- (void)willOpen;
- (void)willBecomeActive;
- (id)initWithDefinition:(id)a0 fromArchive:(BOOL)a1;
- (void)_closed;
- (void)_opened;
- (id)_am_convertForSendingOverXPCWithWorkflow:(id)a0;
- (id)_descriptionViewItem;
- (id)_emptyInput;
- (void)_parametersUpdated;
- (void)_resetForRunningLocally:(id)a0;
- (id)_runConversionActionWithInput:(id)a0 error:(id *)a1;
- (id)_runWithInput:(id)a0;
- (void)_runWithInputDeprecated:(id)a0;
- (id)_variablePropertyListsFromActionParameters;
- (id)_variablesCompletingSubstring:(id)a0;
- (BOOL)acceptsProgramControl;
- (void)addInputConnectionPoint:(id)a0;
- (void)addOutputConnectionPoint:(id)a0;
- (void)addToConversionPath:(id)a0;
- (void)clearConversionPath;
- (BOOL)containsCategories:(id)a0;
- (BOOL)containsKeywords:(id)a0;
- (BOOL)containsSearchValue:(id)a0 mask:(long long)a1;
- (id)conversionPath;
- (id)createNewParameterProperties;
- (id)createOutputAsArrayOfResultsItems;
- (id)createRuntimeParameters;
- (id)deprecatedReplacementActionsStringAsHTML:(BOOL)a0;
- (void)didFinishRunningWithError:(id)a0;
- (id)errorWithErrorDictionary:(id)a0;
- (id)errorWithException:(id)a0;
- (id)evaluateParameterValue:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (void)generateUUIDs;
- (BOOL)isAMAction__;
- (void)logMessageWithLevel:(unsigned long long)a0 format:(id)a1;
- (void)markRemotelyCompletedWithResults:(id)a0;
- (void)markRemotelyStopped;
- (void)opened;
- (BOOL)parameterKeyIsBoundToAMTokenField:(id)a0;
- (void)parametersChanged;
- (void)parametersUpdated;
- (id)propertyListWithError:(id *)a0;
- (void)removeInputConnectionPoint:(id)a0;
- (void)removeOutputConnectionPoint:(id)a0;
- (void)resetForLoop;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)runWithInput:(id)a0 error:(id *)a1;
- (id)runWithInput:(id)a0 fromAction:(id)a1 error:(id *)a2;
- (void)runWithInput:(id)a0 loopParent:(id)a1;
- (void)setVariableController:(id)a0;
- (BOOL)treatsOutputAsValue;
- (void)updateParameterProperties;
- (void)willFinishRunning;
- (void)writeToDictionary:(id)a0;

@end
