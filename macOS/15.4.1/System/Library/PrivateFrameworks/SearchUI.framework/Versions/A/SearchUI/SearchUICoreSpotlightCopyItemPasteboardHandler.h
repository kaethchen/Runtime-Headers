@class SFCoreSpotlightCopyItem;

@interface SearchUICoreSpotlightCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SFCoreSpotlightCopyItem *item;

- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
