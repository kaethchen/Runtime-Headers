@class NSString;

@interface EWSRuleValidationErrorType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long RuleFieldURIType;
@property (nonatomic) long long ErrorCode;
@property (copy, nonatomic) NSString *ErrorMessage;
@property (copy, nonatomic) NSString *FieldValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
