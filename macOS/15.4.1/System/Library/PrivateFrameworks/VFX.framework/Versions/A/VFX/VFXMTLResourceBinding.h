@class NSString, NSMutableArray;
@protocol MTLBinding, MTLArgumentEncoder;

@interface VFXMTLResourceBinding : NSObject {
    BOOL _needsRenderResource;
    struct { char vertexIndex; char fragmentIndex; } _indices;
    struct { char vertexIndex; char fragmentIndex; } _samplerIndices;
    NSMutableArray *_usedResources;
}

@property (retain, nonatomic) id<MTLBinding> binding;
@property (retain, nonatomic) id<MTLArgumentEncoder> argumentEncoder;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableArray *usedResources;
@property (nonatomic) BOOL needsRenderResource;
@property (copy, nonatomic) id bindBlock;

- (void)dealloc;
- (id)description;
- (id)init;

@end
