@class IOSurfaceSharedEvent;
@protocol MTLSharedEvent;

@interface GraphANESharedEventHandler : NSObject {
    IOSurfaceSharedEvent *_ioSurfaceStartSharedEvent;
    id<MTLSharedEvent> _sharedEvent;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;

@end
