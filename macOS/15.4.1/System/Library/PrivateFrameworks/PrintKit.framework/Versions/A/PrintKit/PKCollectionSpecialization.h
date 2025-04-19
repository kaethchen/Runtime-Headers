@class PK_ipp_collection_t;

@interface PKCollectionSpecialization : NSObject <NSCopying> {
    struct Printd_Parameters_ForColTypes { id x0; } *_params;
    PK_ipp_collection_t *_collection;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)collection;
- (id)initWithCollection:(id)a0;
- (const struct Printd_Parameters_ForColTypes { id x0; } *)params;

@end
