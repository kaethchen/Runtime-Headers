@class NSObject, VCPImageBackboneAnalyzer;
@protocol OS_dispatch_queue;

@interface VCPMADImageEmbeddingResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPImageBackboneAnalyzer *_imageBackbone;
    unsigned long long _version;
}

@property (readonly, nonatomic) VCPImageBackboneAnalyzer *imageBackbone;

+ (id)sharedResourceForRevision:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;
- (id)initWithRevision:(unsigned long long)a0;

@end
