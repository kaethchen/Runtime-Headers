@class NSString;
@protocol MIOFeatureValueConstraint;

@interface MIOFeatureDescription : NSObject <NSMutableCopying> {
    struct FeatureDescription { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; struct ArenaStringPtr { void *ptr_; } name_; struct ArenaStringPtr { void *ptr_; } shortdescription_; struct FeatureType *type_; int _cached_size_; } _featureDescriptionParams;
    NSString *_cachedName;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL optional;
@property (readonly, copy, nonatomic) id<MIOFeatureValueConstraint> constraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setShortDescription:(id)a0;
- (id)initWithSpecification:(const void *)a0;
- (const void *)featureDescriptionSpecification;
- (id)featureTypeStringForModelViewer;
- (id)featureTypeDictionaryForModelViewer;

@end
