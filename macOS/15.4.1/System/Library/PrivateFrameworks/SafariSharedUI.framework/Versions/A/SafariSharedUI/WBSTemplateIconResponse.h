@class NSImage, NSColor;

@interface WBSTemplateIconResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSImage *highlightedImage;
@property (readonly, nonatomic) NSColor *themeColor;
@property (readonly, nonatomic, getter=isMonogram) BOOL monogram;

+ (id)responseWithURL:(id)a0 image:(id)a1 highlightedImage:(id)a2 themeColor:(id)a3 isMonogram:(BOOL)a4;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 image:(id)a1 highlightedImage:(id)a2 themeColor:(id)a3 isMonogram:(BOOL)a4;

@end
