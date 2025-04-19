@class NSString, __end_cap_, __end_;

@interface FICompoundNodeIterator : NSObject <FINodeIterator> {
    struct vector<NSObject<FINodeIterator> *, std::allocator<NSObject<FINodeIterator> *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSObject<FINodeIterator> *__strong *, std::allocator<NSObject<FINodeIterator> *>> { id *__value_; } x1; } _subIterators;
    unsigned long long fCurrentIterator;
}

@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)first;
- (id)initWithFINodes:(id)a0 options:(unsigned int)a1;
- (id)next;

@end
