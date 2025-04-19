@class NSDictionary, IOSurface, NSMutableArray;

@interface NSIOSurfacePool : NSObject {
    NSDictionary *_surfaceProperties;
    NSMutableArray *_surfaces;
}

@property (readonly, copy) NSDictionary *surfaceProperties;
@property (readonly) IOSurface *nextUnusedSurface;

- (void)dealloc;
- (id)init;
- (id)initWithSurfaceProperties:(id)a0;

@end
