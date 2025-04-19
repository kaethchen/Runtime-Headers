@class NSString, CIFilter;

@interface IKSFElement : NSObject {
    CIFilter *_filter;
    NSString *_filterName;
    IKSFElement *_parent;
    IKSFElement *_inputElement;
    struct CGPoint { double x; double y; } _origin;
    struct CGSize { double width; double height; } _originalSize;
    BOOL _inUserDomain;
}

+ (id)elementFromDictionary:(id)a0;
+ (id)elementWithEffectName:(id)a0;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)filter;
- (id)result;
- (void)setFilter:(id)a0;
- (id)parent;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x0; double x1; })origin;
- (struct CGSize { double x0; double x1; })originalSize;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setParent:(id)a0;
- (void)refresh;
- (void)setInputImage:(id)a0;
- (id)initFromDictionary:(id)a0;
- (void)setInputBitmap:(id)a0;
- (void)clearInput;
- (id)initWithEffectName:(id)a0;
- (id)inputElement;
- (BOOL)isInUserDomain;
- (id)lastFilterElement;
- (void)setInUserDomain:(BOOL)a0;
- (void)setInputCGImage:(struct CGImage { } *)a0;
- (void)setInputElement:(id)a0;

@end
