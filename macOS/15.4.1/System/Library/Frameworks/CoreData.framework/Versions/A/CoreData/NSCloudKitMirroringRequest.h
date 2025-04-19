@class NSUUID, NSCloudKitMirroringRequestOptions, NSPersistentCloudKitContainerEventActivity, CKSchedulerActivity, NSMutableArray;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {
    BOOL _deferredByBackgroundTimeout;
    NSMutableArray *_containerBlocks;
    BOOL _isContainerRequest;
    CKSchedulerActivity *_schedulerActivity;
    NSPersistentCloudKitContainerEventActivity *_activity;
}

@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, copy, nonatomic) NSCloudKitMirroringRequestOptions *options;
@property (readonly, copy, nonatomic) id /* block */ requestCompletionBlock;

+ (id)allRequestClasses;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (id)createDefaultOptions;
- (id)initWithActivity:(id)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (unsigned long long)requestType;
- (BOOL)validateForUseWithStore:(id)a0 error:(id *)a1;

@end
