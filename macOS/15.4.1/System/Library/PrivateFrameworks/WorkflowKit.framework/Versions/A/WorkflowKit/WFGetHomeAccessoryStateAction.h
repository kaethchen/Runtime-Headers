@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)home;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)characteristic;
- (id)homeName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)localizedAttributionWithContext:(id)a0;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)parameterStateForKey:(id)a0 fallingBackToDefaultValue:(BOOL)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (void)updateCharacteristicsEnumeration;

@end
