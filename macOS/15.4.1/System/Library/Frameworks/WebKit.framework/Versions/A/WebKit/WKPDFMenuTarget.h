@class NSMenuItem;

@interface WKPDFMenuTarget : NSObject {
    NSMenuItem *_selectedMenuItem;
}

- (id)init;
- (id)selectedMenuItem;
- (void)contextMenuAction:(id)a0;

@end
