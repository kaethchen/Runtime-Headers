@class NSPredicate, CNCDPersistenceContext;

@interface CNCDContainerFetcher : NSObject {
    NSPredicate *_predicate;
    CNCDPersistenceContext *_persistenceContext;
}

+ (id)containersForPredicate:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;
+ (id)defaultContainerIdentiferInPersistenceStack:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)containersMatchingPredicate:(id)a0 fromContainers:(id)a1 error:(id *)a2;
- (id)effectivePredicate:(id)a0;
- (id)exchangeSubContainersMatchingPredicate:(id)a0 fromContainers:(id)a1 error:(id *)a2;
- (id)fetchContainers:(id *)a0;
- (id)fetchRequestWithPredicate:(id)a0;
- (id)initWithPredicate:(id)a0 persistenceContext:(id)a1;
- (BOOL)recurseOnPredicate:(id)a0 forGroup:(id)a1;
- (id)topLevelContainersMatchingPredicate:(id)a0 fromContainers:(id)a1;
- (id)validatePredicate:(id)a0 error:(id *)a1;

@end
