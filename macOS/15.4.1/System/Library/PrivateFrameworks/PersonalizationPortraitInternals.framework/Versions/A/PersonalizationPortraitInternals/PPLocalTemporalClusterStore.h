@class PPTemporalClusterStorage;

@interface PPLocalTemporalClusterStore : NSObject {
    PPTemporalClusterStorage *_storage;
}

+ (id)defaultStore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (id)rankedTemporalClusterForStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
