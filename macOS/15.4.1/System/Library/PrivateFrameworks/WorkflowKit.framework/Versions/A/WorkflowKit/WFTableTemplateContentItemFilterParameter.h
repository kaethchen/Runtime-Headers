@class NSDictionary, NSSet, NSString;
@protocol WFPropertyListObject;

@interface WFTableTemplateContentItemFilterParameter : WFParameter {
    void /* unknown type, empty encoding */ isFilterable;
    void /* unknown type, empty encoding */ contentItemClass;
    void /* unknown type, empty encoding */ linkValueTypes;
}

@property (nonatomic, copy) NSDictionary *linkValueTypes;
@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (nonatomic, readonly) id<WFPropertyListObject> defaultSerializedRepresentation;
@property (nonatomic, readonly) NSString *importQuestionBehavior;
@property (nonatomic, readonly) BOOL allowsMultipleValues;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
