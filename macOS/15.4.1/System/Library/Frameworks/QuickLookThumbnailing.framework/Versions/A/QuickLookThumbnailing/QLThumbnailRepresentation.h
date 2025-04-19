@class NSArray, NSImage, UIImage, QLThumbnailMetadata;

@interface QLThumbnailRepresentation : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) UIImage *UIImageThumbnail;
@property (retain, nonatomic) NSImage *NSImageThumbnail;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) double scale;
@property int flavor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) NSImage *NSImage;

- (id)description;
- (void).cxx_destruct;
- (id)initWithThumbnailType:(long long)a0 iconFlavor:(int)a1 CGImage:(struct CGImage { } *)a2 scale:(double)a3 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 generatedProperties:(id)a5;
- (id)UIImage;
- (id)initWithThumbnailType:(long long)a0 iconFlavor:(int)a1 images:(id)a2 scale:(double)a3 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 generatedProperties:(id)a5;

@end
