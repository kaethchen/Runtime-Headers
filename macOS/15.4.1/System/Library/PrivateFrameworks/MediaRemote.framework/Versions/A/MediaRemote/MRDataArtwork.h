@class NSData;

@interface MRDataArtwork : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } dimensions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithImageData:(id)a0;
- (id)initWithProtobuf:(id)a0;

@end
