@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject

@property (class, readonly) INRelevantShortcutStore *defaultStore;

@property (readonly) CSSearchableIndex *index;

- (void).cxx_destruct;
- (id)initWithSearchableIndex:(id)a0;
- (void)setRelevantShortcuts:(id)a0 completionHandler:(id /* block */)a1;
- (void)setRelevantShortcuts:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
