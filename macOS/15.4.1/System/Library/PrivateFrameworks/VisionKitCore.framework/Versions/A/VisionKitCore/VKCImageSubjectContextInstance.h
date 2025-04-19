@class NSBezierPath;

@interface VKCImageSubjectContextInstance : NSObject

@property (nonatomic) struct CGImage { } *orientedMaskImage;
@property (nonatomic) struct CGImage { } *maskImage;
@property (copy, nonatomic) NSBezierPath *baseNormalizedSubjectPath;
@property (copy, nonatomic) NSBezierPath *baseTopLevelNormalizedSubjectPath;
@property (retain, nonatomic) NSBezierPath *cachedNormalizedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedNormalizedPathContentsRect;
@property (retain, nonatomic) NSBezierPath *cachedTopLevelNormalizedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedTopLevelNormalizedPathContentsRect;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned long long madIndex;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)normalizedSubjectPathWithContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topLevelOnly:(BOOL)a1;

@end
