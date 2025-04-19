@class NUImageGeometry;
@protocol NUTextureImage;

@interface PANeutrinoImage : NSObject

@property (retain) id<NUTextureImage> foregroundImage;
@property (retain) NUImageGeometry *foregroundGeometry;
@property (retain) id<NUTextureImage> backgroundImage;
@property (retain) NUImageGeometry *backgroundGeometry;

- (void).cxx_destruct;

@end
