@interface _CFPasteboardCache : NSObject {
    struct __CFDictionary { } *entriesByItemIdentifier;
    struct __CFDictionary { } *indexesByItemIdentifier;
    struct __CFArray { } *itemArray;
    unsigned char didHandleCreate;
}

@property (readonly) int generation;
@property int changeCount;
@property (readonly) struct __CFArray { } *orderedEntries;
@property int lastPboardError;

- (void)dealloc;
- (id)init;
- (void)bumpChangeCount;
- (void)prepareMetadata;
- (void)addEntry:(id)a0;
- (void)clearForGeneration:(int)a0;
- (struct { int x0; long long x1; struct __CFArray *x2; })copyFlavorsForItemIdentifier:(long long)a0;
- (struct { int x0; long long x1; struct __CFArray *x2; struct __CFArray *x3; })copyItemsAndFlavors;
- (id)entryForGeneration:(int)a0 itemIdentifier:(int)a1 flavor:(struct __CFString { } *)a2 errorCode:(int *)a3;
- (struct { int x0; long long x1; long long x2; })flavorCountForItemIdentifier:(long long)a0;
- (int)indexForItem:(int)a0;
- (struct { int x0; long long x1; long long x2; })itemAtIndex:(long long)a0;
- (struct { int x0; long long x1; long long x2; })itemCount;
- (void)prepareDataForItemIdentifier:(long long)a0 flavor:(struct __CFString { } *)a1;
- (id)updateEntry:(id)a0;

@end
