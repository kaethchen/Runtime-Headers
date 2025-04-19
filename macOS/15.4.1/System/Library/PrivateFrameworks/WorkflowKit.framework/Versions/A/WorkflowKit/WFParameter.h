@class WFParameterDefinition, NSSet, NSDictionary, NSHashTable, NSString, WFResourceManager;
@protocol WFPropertyListObject;

@interface WFParameter : NSObject

@property (readonly, nonatomic) NSSet *disallowedVariableTypes;
@property (readonly, nonatomic) BOOL fixedSizeArray;
@property (readonly, copy, nonatomic) WFParameterDefinition *definition;
@property (readonly, nonatomic) NSHashTable *eventObservers;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL displaysMultipleValueEditor;
@property (readonly, nonatomic) NSSet *defaultSupportedVariableTypes;
@property (readonly, copy, nonatomic) NSDictionary *arraySizesBySizeClass;
@property (readonly, copy, nonatomic) NSDictionary *arraySizeRangesByWidgetFamily;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *localizedPrompt;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *keyForSerialization;
@property (readonly, copy, nonatomic) NSString *legacyKey;
@property (readonly, copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) BOOL doNotLocalizeValues;
@property (readonly, nonatomic) BOOL doNotLocalizePlaceholder;
@property (readonly, nonatomic) NSSet *supportedVariableTypes;
@property (readonly, copy, nonatomic) id<WFPropertyListObject> defaultSerializedRepresentation;
@property (readonly, nonatomic) WFResourceManager *resourceManager;
@property (readonly, nonatomic, getter=isInsideWorkflow) BOOL insideWorkflow;
@property (readonly, nonatomic) NSString *importQuestionBehavior;
@property (readonly, nonatomic) NSString *intentSlotName;
@property (readonly, nonatomic) BOOL allowsMultipleValues;
@property (readonly, nonatomic, getter=isRangedSizeArray) BOOL rangedSizeArray;
@property (readonly, nonatomic) BOOL shouldAlignLabels;
@property (nonatomic) long long editingContext;
@property (readonly, nonatomic) BOOL stripsTTSHints;

+ (id)referencedActionResourceClasses;
+ (id)allInsertableVariableTypes;
+ (id)parameterWithDefinition:(id)a0;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)stateClass;
- (void)removeEventObserver:(id)a0;
- (void)addEventObserver:(id)a0;
- (void)attributesDidChange;
- (void)defaultSerializedRepresentationDidChange;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)setActionResources:(id)a0;
- (Class)singleStateClass;
- (void)stateValidityCriteriaDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (Class)multipleStateClass;
- (id)_localizedStringForKey:(id)a0 context:(id)a1;
- (long long)arraySizeForWidgetSizeClass:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })arraySizeRangeForWidgetFamily:(id)a0;
- (id)localizedDescriptionWithContext:(id)a0;
- (id)localizedLabelWithContext:(id)a0;
- (Class)toolkitStateClass;
- (Class)toolkitValueClass;

@end
