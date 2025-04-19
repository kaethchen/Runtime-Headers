@class SFWatchListButtonItem;

@interface SearchUIWatchListButtonItem : SearchUIToggleButtonItem

@property (retain) SFWatchListButtonItem *sfButtonItem;

- (id)toggledTitle;
- (id)untoggledTitle;
- (id)commandForStatus:(unsigned long long)a0;
- (id)offStateSymbolName;
- (id)onStateSymbolName;

@end
