@class SFSportsFollowButtonItem;

@interface SearchUISportsFollowButtonItem : SearchUIToggleButtonItem

@property (retain) SFSportsFollowButtonItem *sfButtonItem;

- (id)toggledTitle;
- (id)untoggledTitle;
- (BOOL)allowsContextMenu;
- (id)commandForStatus:(unsigned long long)a0;
- (id)initWithSFButtonItem:(id)a0;
- (id)offStateSymbolName;
- (id)onStateSymbolName;
- (void)updateButtonStateIsFollowing:(BOOL)a0 didSucceed:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateStateIfNeeded;
- (void)updateStateIfNeededWithCompletionHandler:(id /* block */)a0;
- (BOOL)useDefaultSymbolFillStyle;

@end
