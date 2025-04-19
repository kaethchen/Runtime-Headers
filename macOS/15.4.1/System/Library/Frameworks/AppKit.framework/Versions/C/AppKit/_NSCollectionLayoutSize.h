@class _NSCollectionLayoutDimension;

@interface _NSCollectionLayoutSize : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting> {
    _NSCollectionLayoutDimension *_width;
    _NSCollectionLayoutDimension *_height;
}

@property (readonly, nonatomic) _NSCollectionLayoutDimension *width;
@property (readonly, nonatomic) _NSCollectionLayoutDimension *height;

+ (id)sizeWithWidth:(id)a0 height:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)initWithWidth:(id)a0 height:(id)a1;

@end
