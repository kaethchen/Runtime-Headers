@class VIService, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADVIResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VIService *_service;
}

@property (readonly, nonatomic) VIService *service;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
