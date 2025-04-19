@interface IKImageCropPRS : NSObject <NSCoding, NSCopying> {
    struct CGPoint { double x; double y; } _position;
    struct CGSize { double width; double height; } _scale;
    float _rotation;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)rotation;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x0; double x1; })position;
- (struct CGSize { double x0; double x1; })scale;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setScale:(struct CGSize { double x0; double x1; })a0;
- (void)setRotation:(float)a0;
- (void)setDictionaryRepresentation:(id)a0;
- (struct CGPoint { double x0; double x1; })transformVectorFromViewSpaceToCropSpace:(struct CGPoint { double x0; double x1; })a0;

@end
