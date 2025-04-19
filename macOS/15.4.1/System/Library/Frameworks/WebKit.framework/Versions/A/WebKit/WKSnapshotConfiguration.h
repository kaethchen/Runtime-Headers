@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying> {
    BOOL _includesSelectionHighlighting;
    BOOL _usesContentsRect;
    BOOL _usesTransparentBackground;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (copy, nonatomic) NSNumber *snapshotWidth;
@property (nonatomic) BOOL afterScreenUpdates;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)_includesSelectionHighlighting;
- (void)_setIncludesSelectionHighlighting:(BOOL)a0;
- (void)_setUsesContentsRect:(BOOL)a0;
- (void)_setUsesTransparentBackground:(BOOL)a0;
- (BOOL)_usesContentsRect;
- (BOOL)_usesTransparentBackground;

@end
