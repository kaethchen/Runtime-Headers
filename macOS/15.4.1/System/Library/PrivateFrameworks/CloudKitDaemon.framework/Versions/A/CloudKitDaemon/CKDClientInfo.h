@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKDClientInfo : NSObject {
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct __SCDynamicStore { } *_scstore;
}

@property (readonly, nonatomic) NSString *hostname;

+ (id)sharedClientInfo;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initInternal;
- (void)_refreshHostname;

@end
