@class NSObject;
@protocol KMMapper;

@interface KMItemMapper : NSObject {
    NSObject<KMMapper> *_mapper;
    Class _externalObjectClass;
}

+ (id)_mapperForObjectClass:(Class)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjectClass:(Class)a0 error:(id *)a1;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (long long)targetItemType;

@end
