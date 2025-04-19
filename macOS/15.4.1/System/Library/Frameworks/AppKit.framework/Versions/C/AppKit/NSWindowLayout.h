@interface NSWindowLayout : NSObject <NSCopying, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenLayoutFrame;
    unsigned long long _moveGeneration;
    unsigned long long _resizeGeneration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)adjustFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forWindow:(id)a1 onScreen:(id)a2;
- (BOOL)hasValidGeometry;
- (id)initWithWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 moveGeneration:(unsigned long long)a1 resizeGeneration:(unsigned long long)a2 screen:(id)a3;
- (id)initWithWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 moveGeneration:(unsigned long long)a1 resizeGeneration:(unsigned long long)a2 screenLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)isValidForMoveGeneration:(unsigned long long)a0;
- (BOOL)isValidForResizeGeneration:(unsigned long long)a0;

@end
