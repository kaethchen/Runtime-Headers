@class NSString, WLKArtworkVariant;

@interface WLKMovieClipPreviewArtwork : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } artworkSize;
@property (readonly, nonatomic) BOOL supportsLayeredImage;
@property (readonly, copy, nonatomic) NSString *bgColor;
@property (readonly, copy, nonatomic) NSString *textColor1;
@property (readonly, copy, nonatomic) NSString *textColor2;
@property (readonly, copy, nonatomic) NSString *textColor3;
@property (readonly, copy, nonatomic) NSString *textColor4;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) WLKArtworkVariant *artworkVariant;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_init;

@end
