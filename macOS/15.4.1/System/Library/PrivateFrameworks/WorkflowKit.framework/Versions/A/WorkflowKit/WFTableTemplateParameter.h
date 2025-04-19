@class NSSet, NSString;
@protocol WFPropertyListObject;

@interface WFTableTemplateParameter : WFParameter

@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (nonatomic, readonly) id<WFPropertyListObject> defaultSerializedRepresentation;
@property (nonatomic, readonly) NSString *importQuestionBehavior;
@property (nonatomic, readonly) BOOL allowsMultipleValues;

- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
