@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (void).cxx_destruct;
- (id)subpredicates;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)_notHiddenTypePredicate;
- (id)_notVerifiedPredicate;
- (id)_verifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)personContextAdditionalPredicate;
- (id)personContextDetailPredicate;
- (id)personContextNoTombstonePredicate;
- (id)personContextNonePredicates;
- (id)personContextOneUpPredicate;
- (id)personContextPeopleHomePredicate;
- (id)personContextUnverifiedPredicate;

@end
