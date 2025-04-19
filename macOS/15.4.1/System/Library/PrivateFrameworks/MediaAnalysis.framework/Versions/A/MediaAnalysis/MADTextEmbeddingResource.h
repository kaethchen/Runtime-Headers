@class MADSharedTextEncoder, NSObject, VUWGallery, MADTextEmbeddingThreshold, MADTextEmbeddingSafety;
@protocol OS_dispatch_queue;

@interface MADTextEmbeddingResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    MADSharedTextEncoder *_textEncoder;
    VUWGallery *_entityGallery;
    MADTextEmbeddingThreshold *_calibration;
    MADTextEmbeddingSafety *_safety;
}

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) MADSharedTextEncoder *textEncoder;
@property (readonly, nonatomic) VUWGallery *entityGallery;
@property (readonly, nonatomic) long long tokenEmbeddingType;
@property (readonly, nonatomic) MADTextEmbeddingThreshold *calibration;
@property (readonly, nonatomic) unsigned long long calibrationVersion;
@property (readonly, nonatomic) MADTextEmbeddingSafety *safety;
@property (readonly, nonatomic) BOOL isTextEncoderWarm;

+ (long long)revision;
+ (BOOL)extendedContextLength;
+ (id)sharedResource:(unsigned long long)a0 extendedContextLength:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
