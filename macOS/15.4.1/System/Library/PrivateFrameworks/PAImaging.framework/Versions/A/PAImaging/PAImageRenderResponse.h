@class PACGImage, NSArray, NSString, NSError, NSPointerArray;

@interface PAImageRenderResponse : NSObject <PAMultipleImageRenderResponse> {
    NSPointerArray *_images;
}

@property (readonly) unsigned long long imageCount;
@property (retain) PACGImage *image;
@property (retain) NSError *error;
@property (readonly) NSArray *images;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (id)imageAtIndex:(unsigned long long)a0;
- (void)setImage:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithImageCount:(unsigned long long)a0;

@end
