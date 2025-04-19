@class NSString, NSError, NSDictionary;

@interface LACDTOMutablePolicyEvaluationResult : NSObject <LACDTOPolicyEvaluationResult>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *result;
@property (readonly, nonatomic) BOOL isSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
