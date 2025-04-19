@class NSSet, NSString;
@protocol WFPropertyListObject;

@interface WorkflowKit.WFTableTemplateEntityUpdaterParameter : WFParameter {
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) BOOL allowsMultipleValues;
@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (nonatomic, readonly) id<WFPropertyListObject> defaultSerializedRepresentation;
@property (nonatomic, readonly) NSString *importQuestionBehavior;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
