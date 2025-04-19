@protocol WFWidgetConfigurationHostContextDelegate;

@interface WFWidgetConfigurationHostContext : NSExtensionContext <WFWidgetConfigurationServiceHostProtocol> {
    struct CGSize { double width; double height; } _latestPreferredContentSize;
}

@property (weak, nonatomic) id<WFWidgetConfigurationHostContextDelegate> widgetConfigurationDelegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)intentWasConfigured:(id)a0;
- (void)preferredCardSizeDidUpdate:(struct CGSize { double x0; double x1; })a0;

@end
