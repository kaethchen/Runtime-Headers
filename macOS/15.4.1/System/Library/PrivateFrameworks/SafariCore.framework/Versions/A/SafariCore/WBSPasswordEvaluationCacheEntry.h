@class NSDictionary, NSNumber, WBSPasswordEvaluation;

@interface WBSPasswordEvaluationCacheEntry : NSObject <NSSecureCoding> {
    WBSPasswordEvaluation *_evaluation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSNumber *versionNumber;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithPasswordEvaluation:(id)a0;
- (id)passwordEvaluationWithPassword:(id)a0;
- (id)_initWithPasswordEvaluation:(id)a0 versionNumber:(id)a1;

@end
