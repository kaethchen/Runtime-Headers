@interface VFXMetalWireframeResource : NSObject {
    void *material;
    void *program;
    void *programHashCode;
}

- (void)dealloc;

@end
