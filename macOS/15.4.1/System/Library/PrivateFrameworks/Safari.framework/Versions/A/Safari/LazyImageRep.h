@interface LazyImageRep : NSImageRep {
    id /* block */ _imageCreationBlock;
    struct CGImage { } *_image;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (struct CGImage { } *)CGImage;
- (BOOL)draw;
- (id)initWithCGImageCreationBlock:(id /* block */)a0;

@end
