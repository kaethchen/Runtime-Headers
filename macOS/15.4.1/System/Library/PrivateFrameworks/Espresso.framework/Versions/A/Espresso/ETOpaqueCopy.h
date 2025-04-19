@interface ETOpaqueCopy : NSObject {
    struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *__ptr_; struct __shared_weak_count *__cntrl_; } blob;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)getBlob;
- (id)initWithAbstractBlobContainer:(void *)a0;

@end
