@class NSString;

@interface CATextLayer : CALayer {
    struct CATextLayerPrivate { } *_state;
}

@property (copy) id truncationString;
@property (readonly, getter=isTruncated) BOOL truncated;
@property (copy) id string;
@property void *font;
@property double fontSize;
@property struct CGColor { } *foregroundColor;
@property (getter=isWrapped) BOOL wrapped;
@property (copy) NSString *truncationMode;
@property (copy) NSString *alignmentMode;
@property BOOL allowsFontSubpixelQuantization;

+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (BOOL)wrapped;
- (void)_applyLinesToFunction:(void /* function */ *)a0 info:(void *)a1;
- (void)_applyLinesToFunction:(void /* function */ *)a0 info:(void *)a1 truncated:(BOOL *)a2;
- (id)_createStringDict;
- (struct __CTLine { } *)_createTruncationToken;
- (void)_drawLine:(struct __CTLine { } *)a0 inContext:(struct CGContext { } *)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })_preferredSize;
- (void)_prepareContext:(struct CGContext { } *)a0;
- (struct __CTTypesetter { } *)_retainTypesetter;
- (id)implicitAnimationForKeyPath:(id)a0;

@end
