@class NSArray, NSString;

@interface EWSMultipleOperandBooleanExpressionType : EWSSearchExpressionType <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *SearchExpressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
