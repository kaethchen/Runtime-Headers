@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MTRDeviceDelegateInfo : NSObject {
    void *_delegatePointerValue;
    id _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_interestedPathsForAttributes;
    NSArray *_interestedPathsForEvents;
}

- (id)description;
- (void).cxx_destruct;

@end
