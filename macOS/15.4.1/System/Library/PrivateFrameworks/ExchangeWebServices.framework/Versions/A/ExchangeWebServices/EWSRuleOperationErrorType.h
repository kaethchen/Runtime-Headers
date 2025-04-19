@class NSString, EWSArrayOfRuleValidationErrorsType;

@interface EWSRuleOperationErrorType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long OperationIndex;
@property (retain, nonatomic) EWSArrayOfRuleValidationErrorsType *ValidationErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
