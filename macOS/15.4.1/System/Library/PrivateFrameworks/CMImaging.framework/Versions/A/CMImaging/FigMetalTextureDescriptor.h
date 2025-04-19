@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject

@property (nonatomic) BOOL isLinear;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) MTLTextureDescriptor *desc;
@property (nonatomic) int allocationHint;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 allocatorLabel:(id)a1;

@end
