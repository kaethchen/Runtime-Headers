@interface RBSymbolShapeLayer : CAShapeLayer {
    struct path_ptr { struct RBPath { void *info; struct RBPathCallbacks *callbacks; } _p; } _rbPath;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLayer:(id)a0;
- (void)renderInContext:(struct CGContext { } *)a0;

@end
