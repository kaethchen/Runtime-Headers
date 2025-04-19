@class NSArray;

@interface MTLRenderPipelineFunctionsDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *objectAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *meshAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
