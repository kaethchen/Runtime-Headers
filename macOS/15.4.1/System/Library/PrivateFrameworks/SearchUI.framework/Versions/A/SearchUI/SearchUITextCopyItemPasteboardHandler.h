@class SFTextCopyItem;

@interface SearchUITextCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SFTextCopyItem *item;

- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
