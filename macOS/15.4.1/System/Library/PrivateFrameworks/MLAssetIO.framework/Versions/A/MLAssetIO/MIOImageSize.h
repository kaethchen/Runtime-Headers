@interface MIOImageSize : NSObject <NSCopying> {
    struct ImageFeatureType_ImageSize { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; unsigned long long width_; unsigned long long height_; int _cached_size_; } _imageSizeParams;
}

@property (readonly, nonatomic) long long pixelsWide;
@property (readonly, nonatomic) long long pixelsHigh;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id).cxx_construct;
- (id)initWithSpecification:(const void *)a0;

@end
