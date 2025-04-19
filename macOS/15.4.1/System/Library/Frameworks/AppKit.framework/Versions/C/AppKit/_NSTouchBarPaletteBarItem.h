@class NSString, NSTouchBarItem, NSImage;

@interface _NSTouchBarPaletteBarItem : NSObject <NSCopying> {
    NSImage *_itemSnapshot;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _preferredSize;
    struct CGSize { double width; double height; } _maxSize;
    BOOL _hasCachedMinMaxSize;
}

@property (readonly, copy) NSString *itemIdentifier;
@property (readonly) NSTouchBarItem *representedItem;
@property (readonly) long long customizability;
@property (copy) NSString *disabledContainingGroupIdentifier;

+ (id)paletteItemForBarItem:(id)a0 customizability:(long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (void)_updateMinMaxSizeIfNeeded;
- (id)currentItemSnapshot;
- (id)itemSnapshotWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })preferredSize;

@end
