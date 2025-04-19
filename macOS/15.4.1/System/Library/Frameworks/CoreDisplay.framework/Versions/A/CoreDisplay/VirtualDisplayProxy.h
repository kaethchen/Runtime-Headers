@class CDVirtualDisplayConnect, VirtualDisplayListener;

@interface VirtualDisplayProxy : NSObject {
    VirtualDisplayListener *_listener;
    CDVirtualDisplayConnect *_virtualDisplayConnect;
    unsigned int _proxyRPC_port;
    unsigned int _clientHandler_port;
    struct CGSize { double width; double height; } _sizeInMillimeters;
    unsigned int _maxPixelsWide;
    unsigned int _maxPixelsHigh;
}

@property (readonly, nonatomic) unsigned int displayID;

- (void)dealloc;
- (int)applyProxySettings:(id)a0;
- (id)initWithListener:(id)a0 options:(id)a1 clientHandler_port:(unsigned int)a2 proxyRPC_port:(unsigned int *)a3;
- (int)terminateProxy;

@end
