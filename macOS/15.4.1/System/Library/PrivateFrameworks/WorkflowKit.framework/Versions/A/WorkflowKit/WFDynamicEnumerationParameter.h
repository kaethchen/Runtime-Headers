@class NSString, NSArray, NSError, INObjectCollection;
@protocol WFPropertyListObject, WFDynamicEnumerationDataSource;

@interface WFDynamicEnumerationParameter : WFEnumerationParameter <WFParameterValuePickable> {
    id<WFPropertyListObject> _defaultSerializedRepresentation;
}

@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultValueLoadingState;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) INObjectCollection *possibleStatesCollection;
@property (readonly, nonatomic) unsigned long long possibleStatesLoadingState;
@property (readonly, nonatomic) NSError *possibleStatesLoadingError;
@property (readonly, nonatomic) BOOL shouldAlwaysReloadPossibleStates;
@property (weak, nonatomic) id<WFDynamicEnumerationDataSource> dataSource;
@property (readonly, nonatomic) BOOL loadsDefaultStateAsynchronously;
@property (readonly, nonatomic) BOOL isAsynchronous;

- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (BOOL)allowsMultipleValues;
- (void)clearPossibleStates;
- (void)defaultSerializedRepresentationDidChange;
- (void)loadPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)possibleStatesDidChange;
- (id)possibleStatesForLocalization;
- (void)reloadPossibleStates;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)localizedSubtitleLabelForPossibleState:(id)a0;
- (BOOL)alwaysShowsButton;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)dataSourceSupportsAsynchronousFetchingOfDefaultSerializedRepresentation;
- (BOOL)dataSourceSupportsSynchronousFetchingOfDefaultSerializedRepresentation;
- (void)loadDefaultSerializedRepresentationWithCompletionHandler:(id /* block */)a0;
- (void)setPossibleStates:(id)a0;
- (void)setPossibleStatesFromRemoteSource:(id)a0;

@end
