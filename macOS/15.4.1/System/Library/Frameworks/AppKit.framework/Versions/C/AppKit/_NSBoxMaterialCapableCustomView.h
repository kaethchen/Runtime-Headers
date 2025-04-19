@class _NSBoxCustomView, NSString, NSVisualEffectView, NSColor;

@interface _NSBoxMaterialCapableCustomView : NSView <_NSBoxCustomView> {
    NSVisualEffectView *_effectView;
    _NSBoxCustomView *_simpleCustomView;
    NSColor *_fillColor;
    NSColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
}

@property (copy) NSColor *fillColor;
@property (copy) NSColor *borderColor;
@property double borderWidth;
@property double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
