@class NSColor;

@interface NSTextBlock : NSObject <NSSecureCoding, NSCopying> {
    void *_propVals;
    unsigned long long _propMask;
    unsigned long long _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double contentWidth;
@property (readonly) unsigned long long contentWidthValueType;
@property unsigned long long verticalAlignment;
@property (copy) NSColor *backgroundColor;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBorderColor:(id)a0;
- (void)_takeValuesFromTextBlock:(id)a0;
- (id)borderColorForEdge:(unsigned long long)a0;
- (void)setBorderColor:(id)a0 forEdge:(unsigned long long)a1;
- (void)setContentWidth:(double)a0 type:(unsigned long long)a1;
- (void)setValue:(double)a0 type:(unsigned long long)a1 forDimension:(unsigned long long)a2;
- (void)setWidth:(double)a0 type:(unsigned long long)a1 forLayer:(long long)a2;
- (void)setWidth:(double)a0 type:(unsigned long long)a1 forLayer:(long long)a2 edge:(unsigned long long)a3;
- (double)valueForDimension:(unsigned long long)a0;
- (unsigned long long)valueTypeForDimension:(unsigned long long)a0;
- (double)widthForLayer:(long long)a0 edge:(unsigned long long)a1;
- (unsigned long long)widthValueTypeForLayer:(long long)a0 edge:(unsigned long long)a1;
- (id)_attributeDescription;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (void)_setValue:(double)a0 type:(unsigned long long)a1 forParameter:(unsigned long long)a2;
- (double)_valueForParameter:(unsigned long long)a0;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textContainer:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 layoutManager:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayoutAtPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textContainer:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
