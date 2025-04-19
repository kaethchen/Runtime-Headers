@class NSLock;

@interface NSMenuKEUniquer : NSObject {
    struct __CFDictionary { } *keyTable;
    NSLock *lock;
}

+ (id)mainMenuUniquer;

- (void)dealloc;
- (id)init;
- (void)addItem:(id)a0;
- (void)removeAllItems;
- (void)removeItem:(id)a0;
- (void)_coreAddItem:(id)a0;
- (void)_coreRemoveItem:(id)a0;
- (id)_debugContents;
- (void)_printContents;
- (void)addItems:(id)a0;
- (id)items;
- (void)removeItems:(id)a0;

@end
