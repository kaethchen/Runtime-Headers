@class NSString;

@interface MIODictionaryConstraint : NSObject <MIOFeatureValueConstraint> {
    struct DictionaryFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; union KeyTypeUnion { struct Int64FeatureType *int64keytype_; struct StringFeatureType *stringkeytype_; } KeyType_; int _cached_size_; unsigned int _oneof_case_[1]; } _dictionaryFeatureTypeParams;
}

@property (readonly, nonatomic) long long keyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSpecification:(const void *)a0;
- (const void *)dictionaryFeatureTypeSpecification;

@end
