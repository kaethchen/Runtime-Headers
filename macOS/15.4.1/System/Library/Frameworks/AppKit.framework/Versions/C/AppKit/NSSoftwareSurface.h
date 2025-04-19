@class NSIOSurfacePool;

@interface NSSoftwareSurface : NSObject {
    unsigned int _connectionID;
    unsigned int _windowID;
    NSIOSurfacePool *_surfacePool;
}

@property (readonly) unsigned int connectionID;
@property (readonly) unsigned int windowID;

- (id)frontBuffer;
- (id)initWithConnectionID:(unsigned int)a0 windowID:(unsigned int)a1;

@end
