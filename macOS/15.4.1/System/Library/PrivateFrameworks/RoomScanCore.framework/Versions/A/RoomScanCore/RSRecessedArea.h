@class NSArray, RS3DSurface;

@interface RSRecessedArea : NSObject <NSCopying> {
    NSArray *recessedWalls;
    NSArray *bayWindows;
    RS3DSurface *frontOpening;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
