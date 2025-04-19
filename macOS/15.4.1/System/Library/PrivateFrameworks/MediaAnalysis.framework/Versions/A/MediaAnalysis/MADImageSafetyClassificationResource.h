@class NSObject, SCMLHandler;
@protocol OS_dispatch_queue;

@interface MADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    SCMLHandler *_handler;
}

@property (readonly, nonatomic) SCMLHandler *handler;

+ (id)sharedResource;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
