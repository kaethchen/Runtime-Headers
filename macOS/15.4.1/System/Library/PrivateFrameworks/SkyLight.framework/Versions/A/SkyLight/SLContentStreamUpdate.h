@class NSDictionary, IOSurface, NSArray;

@interface SLContentStreamUpdate : NSObject

@property (nonatomic) struct CGDisplayStreamUpdate { } *updateRef;
@property (nonatomic) NSDictionary *metaData;
@property (readonly) int status;
@property (readonly) unsigned long long displayTime;
@property (readonly) IOSurface *frameSurface;
@property (readonly, nonatomic) NSArray *dirtyRects;
@property (readonly, nonatomic) unsigned long long dropCount;
@property (readonly, nonatomic) double displayResolution;
@property (readonly, nonatomic) double contentScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (void)dealloc;
- (id)copyRects:(int)a0;
- (id)initWithStatus:(int)a0 displayTime:(unsigned long long)a1 frameSurface:(id)a2 updateRef:(struct CGDisplayStreamUpdate { } *)a3;

@end
