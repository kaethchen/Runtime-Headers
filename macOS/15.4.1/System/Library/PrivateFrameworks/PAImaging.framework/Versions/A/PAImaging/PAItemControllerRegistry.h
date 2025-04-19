@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PAItemControllerRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_table;
}

+ (id)registry;

- (id)init;
- (void).cxx_destruct;
- (id)_itemControllerForIdentifier:(id)a0 object:(id)a1 ofClass:(Class)a2 create:(BOOL)a3;
- (id)existingItemControllerForIdentifier:(id)a0 object:(id)a1 ofClass:(Class)a2;
- (id)itemControllerForIdentifier:(id)a0 object:(id)a1 ofClass:(Class)a2;

@end
