@interface PXMagazineRectArray : NSObject <NSCopying> {
    struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; } *_rects;
    unsigned long long _currentIndex;
    unsigned long long _size;
}

@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) double score;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRect:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (id)initWithSize:(unsigned long long)a0;
- (struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })rectAtIndex:(unsigned long long)a0;
- (void)removeLastRect;
- (unsigned long long)rowsUsed;

@end
