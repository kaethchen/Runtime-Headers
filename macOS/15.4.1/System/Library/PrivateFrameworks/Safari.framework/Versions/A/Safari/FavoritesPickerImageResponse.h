@class NSImage, NSColor;

@interface FavoritesPickerImageResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSColor *themeColor;

+ (id)responseWithURL:(id)a0 image:(id)a1 themeColor:(id)a2;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 image:(id)a1 themeColor:(id)a2;

@end
