@class NSError, CIImage, NUImageGeometry;

@interface NUMaskTransformerResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CIImage *image;
@property (retain, nonatomic) NUImageGeometry *geometry;

- (void).cxx_destruct;

@end
