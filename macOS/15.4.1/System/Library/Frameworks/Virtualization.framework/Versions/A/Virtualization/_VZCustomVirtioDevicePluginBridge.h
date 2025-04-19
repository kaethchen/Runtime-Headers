@class _VZCustomVirtioDevice;
@protocol _VZCustomVirtioDeviceConfigurationDelegate;

@interface _VZCustomVirtioDevicePluginBridge : NSObject <_VZPluginBridgeInterface> {
    id<_VZCustomVirtioDeviceConfigurationDelegate> _delegate;
    _VZCustomVirtioDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 personalityDictionary:(id)a1 personalityClass:(Class)a2 connectionDelegate:(id)a3 options:(id)a4;

@end
