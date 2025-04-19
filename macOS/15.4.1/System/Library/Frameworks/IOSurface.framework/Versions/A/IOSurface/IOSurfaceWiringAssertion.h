@interface IOSurfaceWiringAssertion : NSObject {
    unsigned int _mach_port;
}

- (void)dealloc;
- (id)initWithIOSurface:(id)a0;
- (id)initWithIOSurfaceClient:(struct __IOSurfaceClient { } *)a0;

@end
