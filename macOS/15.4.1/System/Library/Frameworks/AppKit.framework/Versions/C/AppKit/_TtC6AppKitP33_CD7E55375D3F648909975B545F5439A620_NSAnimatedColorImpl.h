@class NSString, NSImage;

@interface _TtC6AppKitP33_CD7E55375D3F648909975B545F5439A620_NSAnimatedColorImpl : NSColor {
    void /* unknown type, empty encoding */ _provider;
    void /* unknown type, empty encoding */ $__lazy_storage_$__patternImage;
}

@property (nonatomic, readonly) NSString *colorSpaceName;
@property (nonatomic, readonly) NSImage *patternImage;
@property (nonatomic, readonly) struct CGColor { } *CGColor;
@property (nonatomic, readonly) double alphaComponent;

- (id)init;
- (void)set;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setStroke;
- (void)setFill;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (BOOL)isUniform;

@end
