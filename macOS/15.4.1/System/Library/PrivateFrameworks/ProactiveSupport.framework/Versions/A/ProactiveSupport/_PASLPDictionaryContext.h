@class NSCache;

@interface _PASLPDictionaryContext : NSObject {
    const unsigned int *_storage;
    unsigned long long _count;
}

@property (weak, nonatomic) NSCache *enumerationCache;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
