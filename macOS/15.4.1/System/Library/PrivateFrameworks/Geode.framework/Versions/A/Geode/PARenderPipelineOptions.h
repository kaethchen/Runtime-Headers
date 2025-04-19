@class IPAColorProfile, NSDictionary, PAImageRequestCacheHint;

@interface PARenderPipelineOptions : NSObject <NSCopying> {
    BOOL _gamutModeSet;
    int _gamutMode;
}

@property (retain) IPAColorProfile *linearOutputColorProfileImpl;
@property (retain) IPAColorProfile *outputColorProfile;
@property (retain) IPAColorProfile *linearOutputColorProfile;
@property (retain) NSDictionary *cgImageProperties;
@property int renderMode;
@property (nonatomic) int gamutMode;
@property (nonatomic) long long sampleMode;
@property (retain) PAImageRequestCacheHint *cacheHint;
@property BOOL videoFrame;

+ (void)setGlobalPreserveHueGamutMapOptions:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)_obtainLinearColorProfile:(id)a0;
- (id)linearOutputColorProfile;
- (void)setLinearOutputColorProfile:(id)a0;

@end
