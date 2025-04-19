@class VZGraphicsDevice, VZVirtioGraphicsScanoutConfiguration;

@interface VZVirtioGraphicsScanout : VZGraphicsDisplay {
    VZVirtioGraphicsScanoutConfiguration *_configuration;
    VZGraphicsDevice *_graphicsDevice;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)_configuration;
- (id)_graphicsDevice;
- (struct variant<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct __impl<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display> { struct Display { struct Size<unsigned long long> { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; int x2; int x3; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct Scanout { struct Rect<unsigned int> { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_displayConfiguration;
- (BOOL)_matchesConfiguration:(id)a0;
- (BOOL)_matchesSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)reconfigureWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)reconfigureWithSizeInPixels:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;

@end
