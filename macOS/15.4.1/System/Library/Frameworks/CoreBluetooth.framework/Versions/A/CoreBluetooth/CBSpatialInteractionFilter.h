@interface CBSpatialInteractionFilter : NSObject <CUXPCCodable, NSCopying>

@property (nonatomic) unsigned char requiredSpatialFlags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mask;
- (id)blob;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
