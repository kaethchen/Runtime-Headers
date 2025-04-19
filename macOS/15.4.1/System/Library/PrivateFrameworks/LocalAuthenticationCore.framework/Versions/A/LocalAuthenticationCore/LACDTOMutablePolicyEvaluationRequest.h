@class NSString, NSDictionary;
@protocol LACDTOEnvironment;

@interface LACDTOMutablePolicyEvaluationRequest : NSObject <LACDTOPolicyEvaluationRequest>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long policy;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) id<LACDTOEnvironment> environment;
@property (retain, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) BOOL isInteractiveRatchetEvaluation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)updatePayload:(id)a0;

@end
