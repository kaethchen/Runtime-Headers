@interface SearchUICopyButtonItem : SearchUIButtonItem

- (BOOL)hasState;
- (BOOL)allowsContextMenu;
- (void)didUpdatePasteboard;
- (id)initWithSFButtonItem:(id)a0;
- (id)onStateSymbolName;

@end
