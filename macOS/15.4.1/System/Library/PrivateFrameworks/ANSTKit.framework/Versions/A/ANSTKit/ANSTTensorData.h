@class NSString, ANSTTensorDescriptor;

@interface ANSTTensorData : NSObject <ANSTTensorDataAccessing, ANSTTensorDataMutableAccessing> {
    ANSTTensorDescriptor *_tensorDescriptor;
    void *_dataPointer;
    unsigned long long _length;
    id /* block */ _deallocator;
}

@property (readonly, copy, nonatomic) ANSTTensorDescriptor *tensorDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 dataPointer:(void *)a1 length:(unsigned long long)a2 deallocator:(id /* block */)a3 error:(id *)a4;
- (BOOL)performDataAccessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)performMutableDataAccessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1 error:(id *)a2;

@end
