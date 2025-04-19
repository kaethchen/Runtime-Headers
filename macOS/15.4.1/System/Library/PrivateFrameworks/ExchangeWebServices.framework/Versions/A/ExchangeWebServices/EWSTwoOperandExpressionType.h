@class NSString, EWSBasePathToElementType, EWSFieldURIOrConstantType;

@interface EWSTwoOperandExpressionType : EWSSearchExpressionType <XSDefinitionProvider>

@property (retain, nonatomic) EWSBasePathToElementType *Path;
@property (retain, nonatomic) EWSFieldURIOrConstantType *FieldURIOrConstant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
