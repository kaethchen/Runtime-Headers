@class NSArray, NSDictionary, AVVideoOutputSpecification;

@interface AVTaggedVideoOutputSpecification : NSObject {
    AVVideoOutputSpecification *_realSpecification;
}

@property (readonly, copy, nonatomic) NSArray *preferredTagCollections;
@property (copy, nonatomic) NSDictionary *defaultPixelBufferAttributes;

- (void)dealloc;
- (id)initWithTagCollections:(id)a0;
- (id)realSpecification;
- (void)setOutputPixelBufferAttributes:(id)a0 forTagCollection:(struct OpaqueCMTagCollection { } *)a1;

@end
