@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) INIntentSlotDescription *slotDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;
- (BOOL)alwaysShowsButton;

@end
