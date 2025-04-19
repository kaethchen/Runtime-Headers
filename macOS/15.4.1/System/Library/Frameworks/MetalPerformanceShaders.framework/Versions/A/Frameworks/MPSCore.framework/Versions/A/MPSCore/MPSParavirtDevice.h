@protocol MTLDevice;

@interface MPSParavirtDevice : NSObject {
    id<MTLDevice> _device;
    SEL _hostSupportsFamilySEL;
    void /* function */ *_hostSupportsFamily;
}

- (id)initWithDevice:(id)a0;
- (BOOL)supportsFamily:(long long)a0;

@end
