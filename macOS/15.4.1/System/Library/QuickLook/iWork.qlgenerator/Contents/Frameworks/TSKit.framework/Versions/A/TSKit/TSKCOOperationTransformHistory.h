@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSKCOOperationTransformHistory : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_history;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)didTransformOperationWithResult:(struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })a0 token:(id)a1;
- (id)willTransformOperation:(struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })a0 withOperation:(struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })a1;

@end
