@class NSArray;

@interface WFRemindersListPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id defaultSerializedListRepresentation;
@property (retain, nonatomic) NSArray *listStates;
@property (readonly, nonatomic) BOOL allowsAllLists;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)possibleStates;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)reloadStates;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)storeDidChange;

@end
