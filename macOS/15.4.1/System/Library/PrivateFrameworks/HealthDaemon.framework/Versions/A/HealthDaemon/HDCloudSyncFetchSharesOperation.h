@class NSArray, NSMutableArray;

@interface HDCloudSyncFetchSharesOperation : HDCloudSyncSynchronousOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_shares;
}

@property (nonatomic) BOOL fetchAllShares;
@property (readonly, copy, nonatomic) NSArray *shares;

- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
