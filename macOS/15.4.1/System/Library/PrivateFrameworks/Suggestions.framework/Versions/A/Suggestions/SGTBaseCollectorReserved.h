@class NSObject;
@protocol OS_dispatch_queue, SGTSearchQueryCollectorDelegate;

@interface SGTBaseCollectorReserved : NSObject {
    NSObject<OS_dispatch_queue> *dispatchQueue;
    id<SGTSearchQueryCollectorDelegate> delegate;
}

- (void).cxx_destruct;

@end
