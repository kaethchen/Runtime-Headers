@class NSImage, SFImage;

@interface WBSParsecImageRepresentation : NSObject {
    NSImage *_image;
    SFImage *_sfImage;
}

- (void).cxx_destruct;
- (id)initWithSFImage:(id)a0;
- (id)_templateImageWithImage:(id)a0;
- (id)imageWithScaleFactor:(double)a0;
- (id)imageWithSession:(id)a0;

@end
