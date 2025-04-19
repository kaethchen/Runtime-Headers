@interface IKFilterBrowserPanel : NSPanel {
    id _filterBrowserView;
}

+ (id)filterBrowserPanelWithStyleMask:(unsigned int)a0;

- (void)beginSheetWithOptions:(id)a0 modalForWindow:(id)a1 modalDelegate:(id)a2 didEndSelector:(SEL)a3 contextInfo:(void *)a4;
- (void)beginWithOptions:(id)a0 modelessDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)filterBrowserViewWithOptions:(id)a0;
- (id)filterBrowserViewWithOptions:(id)a0 modal:(BOOL)a1;
- (id)filterName;
- (int)runModalWithOptions:(id)a0;

@end
