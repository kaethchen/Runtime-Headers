@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly) NSMutableArray *delegatesStorage;
@property unsigned int firedCallbackFlags;
@property (readonly) NSMutableArray *photoProxies;
@property (nonatomic) int expectedPhotoCount;
@property (nonatomic) int firedPhotoCallbacksCount;
@property (copy, nonatomic) NSString *originalDeferredPhotoIdentifier;
@property (nonatomic) unsigned int qosClass;

- (void)dealloc;
- (id)description;
- (void)addDelegate:(id)a0;
- (void)addProxy:(id)a0;
- (id)initWithPhotoProxy:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 qosClass:(unsigned int)a3;

@end
