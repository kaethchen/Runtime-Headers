@class SFImageCopyItem, NSImage;

@interface SearchUIImageCopyItemPasteboardHandler : SearchUIPasteboardCopyHandler

@property (retain) SFImageCopyItem *item;
@property (retain) NSImage *image;

- (void).cxx_destruct;
- (void)setItem:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;

@end
