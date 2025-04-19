@class NUSpace, NSMutableArray;

@interface _NUTaggedSpace : NSObject <NSCopying> {
    NSMutableArray *_tagNodes;
}

@property (readonly) NUSpace *space;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTagNode:(id)a0;
- (void)addTagNodes:(id)a0;
- (BOOL)hasTransform;
- (id)initWithSpace:(id)a0;
- (BOOL)isEqualToTaggedImageSpace:(id)a0;
- (void)mergeSpace:(id)a0;
- (id)tagNodes;

@end
