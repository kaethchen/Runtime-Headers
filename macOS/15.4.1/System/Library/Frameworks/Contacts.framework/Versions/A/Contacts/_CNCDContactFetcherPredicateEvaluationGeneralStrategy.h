@class NSString;
@protocol CNCDContactPredicate, CNCDContactFetcherPredicateEvaluationContext;

@interface _CNCDContactFetcherPredicateEvaluationGeneralStrategy : NSObject <CNCDContactFetcherPredicateEvaluationStrategy>

@property (readonly) id<CNCDContactPredicate> predicate;
@property (readonly) id<CNCDContactFetcherPredicateEvaluationContext> evaluationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fetchContacts;
- (id)initWithPredicate:(id)a0 evaluationContext:(id)a1;

@end
