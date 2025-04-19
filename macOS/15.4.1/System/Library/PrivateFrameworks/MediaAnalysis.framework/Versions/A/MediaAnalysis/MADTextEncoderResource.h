@class CSUTextEncoder, NSObject;
@protocol OS_dispatch_queue;

@interface MADTextEncoderResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    CSUTextEncoder *_textEncoder;
}

@property (readonly, nonatomic) CSUTextEncoder *textEncoder;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long tokenEmbeddingType;
@property (readonly, nonatomic) unsigned long long version;

+ (id)sharedResource;
+ (id)sharedResource:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (id)additionalLayerNames;
- (BOOL)supportsAgeTypePromptAdjustment;
- (long long)activeCost;
- (long long)inactiveCost;
- (id)tokensForAgeType:(unsigned short)a0;

@end
