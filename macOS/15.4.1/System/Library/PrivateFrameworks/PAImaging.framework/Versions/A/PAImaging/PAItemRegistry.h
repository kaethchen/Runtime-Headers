@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PAItemRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_table;
}

+ (id)registry;

- (id)init;
- (void).cxx_destruct;
- (id)allItems;
- (id)_itemForIdentifier:(id)a0 object:(id)a1 ofClass:(Class)a2;
- (id)itemForIdentifier:(id)a0 object:(id)a1 ofClass:(Class)a2;

@end
