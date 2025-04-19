@class CKDIdentityCache, NSObject, CKDContainer;
@protocol OS_dispatch_queue;

@interface CKDPublicIdentityLookupService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CKDIdentityCache *cache;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (void)configureRequest:(id)a0;
- (void)removeCacheForLookupInfos:(id)a0;
- (void)scheduleRequest:(id)a0;

@end
