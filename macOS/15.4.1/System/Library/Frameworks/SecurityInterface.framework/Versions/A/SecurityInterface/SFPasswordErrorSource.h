@class NSImage, NSMutableAttributedString, NSMatrix;

@interface SFPasswordErrorSource : NSObject {
    NSImage *_iconWarning;
    NSImage *_iconError;
    NSMutableAttributedString *_attrString;
    id _controller;
    NSMatrix *_theMatrix;
    int SFPasswordErrorType;
}

- (void)dealloc;
- (id)init;
- (int)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(int)a2;
- (id)attrStringForWarning:(id)a0 type:(int)a1 font:(id)a2;
- (void)matrixReloaded;

@end
