@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *imageURL1x;
@property (retain, nonatomic) NSURL *imageURL2x;
@property (retain, nonatomic) NSURL *imageURL3x;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithImageURL1X:(id)a0 imageURL2X:(id)a1 imageURL3X:(id)a2;

@end
