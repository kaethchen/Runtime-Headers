@class CANetworkBrowserImpl;

@interface CANetworkBrowserWindowController : NSWindowController {
    CANetworkBrowserImpl *_impl;
}

+ (BOOL)isAVBSupported;

- (id)init;
- (void)close;
- (void)awakeFromNib;
- (void)windowDidLoad;

@end
