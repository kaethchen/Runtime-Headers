@class AVRoutePickerRemoteViewController, NSPopover;

@interface AVRoutePickerViewRemoteViewService : NSObject {
    AVRoutePickerRemoteViewController *_routePickerRemoteViewController;
    NSPopover *_popover;
}

@property (readonly, nonatomic) NSPopover *popover;

- (void).cxx_destruct;
- (void)getRoutePickerRemoteViewControllerForOutputContext:(id)a0 completionHandler:(id /* block */)a1;

@end
