@class NSString, WFVariableString;
@protocol WFChooseFromMenuActionEventCoordinator;

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate>

@property (readonly, nonatomic) long long latestMenuChoice;
@property (copy, nonatomic) WFVariableString *itemTitle;
@property (weak, nonatomic) id<WFChooseFromMenuActionEventCoordinator> eventCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)serializedParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)initializeParameters;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (void)arrayParameter:(id)a0 confirmDeletionOfItemAtIndex:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)arrayParameter:(id)a0 itemWasInserted:(id)a1 atIndex:(unsigned long long)a2;
- (void)arrayParameter:(id)a0 itemWasMovedFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)arrayParameter:(id)a0 itemWasUpdatedAtIndex:(unsigned long long)a1 toValue:(id)a2;
- (id)createAccompanyingActions;
- (void)variableDidChange:(id)a0;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)inputSourceInWorkflow:(id)a0;
- (id)intermediaryActions;
- (id)newIntermediaryActionWithMenuItemTitle:(id)a0;
- (unsigned long long)numberOfActionsIncludedWithAction:(id)a0;
- (void)showAlertWithInput:(id)a0;

@end
