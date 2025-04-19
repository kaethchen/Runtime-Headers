@class NSString, EWSBasePathToElementType, EWSConstantValueType;

@interface EWSContainsExpressionType : EWSSearchExpressionType <XSDefinitionProvider>

@property (retain, nonatomic) EWSConstantValueType *Constant;
@property (nonatomic) long long ContainmentComparison;
@property (nonatomic) long long ContainmentMode;
@property (retain, nonatomic) EWSBasePathToElementType *Path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
