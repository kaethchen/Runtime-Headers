@class NSArray, NSString;

@interface MIOStateConstraint : NSObject <MIOFeatureValueConstraint> {
    struct StateFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; union TypeUnion { struct ArrayFeatureType *arraytype_; } Type_; int _cached_size_; unsigned int _oneof_case_[1]; } _stateFeatureTypeParams;
}

@property (readonly, copy, nonatomic) NSArray *bufferShape;
@property (readonly, nonatomic) long long dataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSpecification:(const void *)a0;
- (const void *)stateFeatureTypeSpecification;

@end
