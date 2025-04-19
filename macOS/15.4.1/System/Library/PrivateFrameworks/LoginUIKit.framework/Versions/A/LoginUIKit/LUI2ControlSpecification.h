@class NSString, NSImage, NSFont, NSColor;

@interface LUI2ControlSpecification : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dimensions;
@property (retain) NSString *symbol;
@property long long scale;
@property double size;
@property double weight;
@property (retain) NSImage *imageInternal;
@property struct CGImage { } *imageRefInternal;
@property struct CGImage { } *imageRef2xInternal;
@property (retain) NSColor *primaryColor;
@property (retain) NSColor *secondaryColor;
@property (readonly) NSFont *font;
@property (readonly) NSImage *image;
@property (readonly) struct CGImage { } *imageRef;
@property (readonly) struct CGImage { } *imageRef2x;

+ (id)_controlSpecifications;
+ (id)controlSpecificationForIdentifier:(id)a0;
+ (id)controlSpecificationWithSpecification:(id)a0;
+ (id)controlSpecifications;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0;
- (BOOL)_isValidSpecification:(id)a0;

@end
