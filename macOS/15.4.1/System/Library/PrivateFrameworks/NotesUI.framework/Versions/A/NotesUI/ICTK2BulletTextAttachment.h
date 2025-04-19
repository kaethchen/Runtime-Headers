@class NSMutableDictionary, NSAttributedString;

@interface ICTK2BulletTextAttachment : ICTextAttachment

@property (class, readonly, nonatomic) NSMutableDictionary *imageCache;

@property (readonly, nonatomic) NSAttributedString *marker;

- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (id)initWithMarker:(id)a0;

@end
