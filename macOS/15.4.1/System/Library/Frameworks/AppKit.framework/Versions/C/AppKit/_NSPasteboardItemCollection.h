@class NSMapTable;

@interface _NSPasteboardItemCollection : NSObject {
    NSMapTable *_sparsePasteboardItems;
    long long _cachedItemGenerationCount;
}

- (void)dealloc;
- (id)init;
- (void)addPasteboardItem:(id)a0 atIndex:(unsigned long long)a1 generationCount:(long long)a2;
- (id)pasteboardItemAtIndex:(unsigned long long)a0 pasteboard:(id)a1 generationCount:(long long)a2;
- (id)pasteboardItemsWithItemCount:(unsigned long long)a0 pasteboard:(id)a1 generationCount:(long long)a2;

@end
