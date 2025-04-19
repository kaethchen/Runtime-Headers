@class NSData, NSImageRep;

@interface NSPICTImageRep : NSImageRep {
    struct CGImage { } *_img;
    struct CGPoint { double x; double y; } _pictOrigin;
    NSData *_pictData;
    NSImageRep *_imageRep;
    unsigned long long _pictOffset;
}

@property (readonly, copy) NSData *PICTRepresentation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;

+ (void)initialize;
+ (BOOL)canInitWithData:(id)a0;
+ (id)imageRepWithData:(id)a0;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredTypes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (BOOL)_isValid;
- (BOOL)draw;

@end
