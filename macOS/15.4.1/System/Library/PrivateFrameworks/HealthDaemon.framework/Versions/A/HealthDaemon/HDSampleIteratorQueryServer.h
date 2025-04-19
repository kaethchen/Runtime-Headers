@class HKSampleIteratorQueryCursor;

@interface HDSampleIteratorQueryServer : HDBatchedQueryServer {
    unsigned long long _deliveredResultCount;
    HKSampleIteratorQueryCursor *_queryCursor;
    unsigned long long _limit;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)objectTypes;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
