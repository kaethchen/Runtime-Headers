@interface _NSSVGImageRep : NSImageRep {
    struct CGSVGDocument { } *_document;
}

+ (BOOL)canInitWithData:(id)a0;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredTypes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)draw;
- (id)initWithSVGDocument:(struct CGSVGDocument { } *)a0;

@end
