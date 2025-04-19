@class NSArray, HFTriggerActionSetsBuilder, NSString, HMHome;
@protocol WFPropertyListObject;

@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *homeIdentifier;
@property (readonly, copy, nonatomic) NSArray *serializedActionSets;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithActionSets:(id)a0 homeIdentifier:(id)a1;

@end
