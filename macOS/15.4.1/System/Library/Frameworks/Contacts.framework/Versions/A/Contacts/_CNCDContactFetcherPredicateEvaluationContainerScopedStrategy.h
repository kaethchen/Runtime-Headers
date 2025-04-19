@class NSString, CNResult;
@protocol CNCDContactFetcherPredicateEvaluationContext, CNCDContainerScopedContactPredicate;

@interface _CNCDContactFetcherPredicateEvaluationContainerScopedStrategy : NSObject <CNCDContactFetcherPredicateEvaluationStrategy>

@property (readonly) id<CNCDContainerScopedContactPredicate> predicate;
@property (readonly) id<CNCDContactFetcherPredicateEvaluationContext> evaluationContext;
@property (retain) CNResult *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fetchContacts;
- (void)fetchContactsInSubContainers;
- (void)fetchContactsInTopLevelContainers;
- (void)fetchUnscopedContacts;
- (id)fetchUnscopedContactsMatchingPredicate:(id)a0;
- (id)initWithPredicate:(id)a0 evaluationContext:(id)a1;
- (BOOL)isPredicateValid;
- (void)validatePredicate;

@end
