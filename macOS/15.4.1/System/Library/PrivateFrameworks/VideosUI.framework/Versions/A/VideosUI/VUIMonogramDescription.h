@class NSString, NSDictionary, NSURL, NSImage, NSFont, NSColor;
@protocol VUINetworkRequestLoader;

@interface VUIMonogramDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSFont *font;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (retain, nonatomic) NSDictionary *specialOffsetByFirstLetter;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) long long scaleMode;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) double upscaleAdjustment;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSColor *fillColor;
@property (retain, nonatomic) NSColor *gradientStartColor;
@property (retain, nonatomic) NSColor *gradientEndColor;
@property (nonatomic) BOOL shouldFallBackToSilhouette;
@property (nonatomic) BOOL isUsingLibraryImageLoader;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSColor *borderColor;
@property (weak, nonatomic) id<VUINetworkRequestLoader> requestLoader;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (nonatomic) BOOL optimizedImageRendering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithType:(unsigned long long)a0;
- (id)initWithText:(id)a0 imageURL:(id)a1 font:(id)a2;
- (unsigned long long)preferedMonogramType;
- (struct CGPoint { double x0; double x1; })specialOffsetForString:(id)a0;

@end
