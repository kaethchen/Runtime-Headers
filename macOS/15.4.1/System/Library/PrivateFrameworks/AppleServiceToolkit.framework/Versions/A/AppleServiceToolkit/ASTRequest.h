@class NSDictionary, NSNumber, ASTErrorStatus;

@interface ASTRequest : ASTSealablePayload

@property (nonatomic) long long clientStatus;
@property (retain, nonatomic) ASTErrorStatus *error;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *currentTest;
@property (retain, nonatomic) NSNumber *progress;
@property (retain, nonatomic) NSNumber *estimatedTimeRemaining;
@property (copy, nonatomic) id /* block */ completion;

+ (id)request;
+ (BOOL)isEstimatedTimeRemainingFeatureEnabled;
+ (id)stringFromClientStatus:(long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)generatePayload;

@end
