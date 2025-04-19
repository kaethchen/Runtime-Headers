@class NSString;

@interface SPSimpleMetadataPattern : SPMetadataPattern {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryEvalLock;
    struct __MDSimpleQueryEvaluator { } *_queryEval;
}

@property (readonly) NSString *queryString;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (id)initWithQuery:(id)a0;
- (id)initWithQuery:(id)a0 isCoreSpotlight:(BOOL)a1;
- (unsigned long long)matchBits:(id)a0;
- (void)setAttributesForWildcard:(id)a0;

@end
