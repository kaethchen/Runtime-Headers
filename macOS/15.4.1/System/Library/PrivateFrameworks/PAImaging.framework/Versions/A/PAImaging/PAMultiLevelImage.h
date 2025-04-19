@class PANeutrinoImage, PADevice, NSMutableArray;

@interface PAMultiLevelImage : NSObject <NSCopying, NSMutableCopying> {
    NSMutableArray *_levels;
    long long _orientation;
    long long _displayOrientation;
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) PADevice *device;
@property (retain) PANeutrinoImage *neutrinoImage;

+ (id)imageWithImage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithImage:(id)a0;
- (long long)orientation;
- (id)initWithImages:(id)a0;
- (void)_enumerateLevelsUsingBlock:(id /* block */)a0;
- (void)_insertImage:(id)a0 atLevel:(unsigned long long)a1;
- (unsigned long long)_levelForResolution:(double)a0;
- (unsigned long long)_levelOfImage:(id)a0;
- (double)_resolutionAtLevel:(unsigned long long)a0;
- (double)_resolutionForImage:(id)a0;
- (double)_resolutionForOriginalImageSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)backgroundLevelForImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toLevel:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLevel:(unsigned long long)a1 toImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLevel:(unsigned long long)a1 toLevel:(unsigned long long)a2;
- (id)convertRegion:(id)a0 fromImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toLevel:(unsigned long long)a2;
- (id)convertRegion:(id)a0 fromLevel:(unsigned long long)a1 toImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)convertRegion:(id)a0 fromLevel:(unsigned long long)a1 toLevel:(unsigned long long)a2;
- (long long)displayOrientation;
- (void)enumerateLevelsUsingBlock:(id /* block */)a0;
- (void)enumerateLevelsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)foregroundLevelForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageAtLevel:(unsigned long long)a0;
- (id)initWithMultiLevelImage:(id)a0;
- (BOOL)isEqualToMultiLevelImage:(id)a0;
- (BOOL)isEqualToTiledImage:(id)a0;
- (unsigned long long)numberOfLevels;

@end
