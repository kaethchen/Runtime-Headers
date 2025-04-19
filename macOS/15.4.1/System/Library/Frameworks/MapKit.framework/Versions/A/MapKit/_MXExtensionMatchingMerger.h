@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface _MXExtensionMatchingMerger : NSObject {
    NSObject<OS_dispatch_queue> *_lock;
    NSArray *_mapExtensions;
    NSArray *_intentNonUIExtensions;
    NSArray *_intentUIExtensions;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearExtensions;
- (id)receiveExtensions:(id)a0 withIndex:(unsigned long long)a1;

@end
