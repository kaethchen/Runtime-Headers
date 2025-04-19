@class NSArray;

@interface NSTouchBarItemTreeNode : NSObject <NSCopying>

@property (readonly, copy) NSArray *leafNodes;
@property (copy) NSArray *childNodes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)nodeByReplacingChild:(id)a0 withNodes:(id)a1;
- (BOOL)_enumerateWithOrder:(long long)a0 handler:(id /* block */)a1;
- (void)enumerateWithOrder:(long long)a0 descentHandler:(id /* block */)a1;
- (void)enumerateWithOrder:(long long)a0 handler:(id /* block */)a1;
- (id)flatFilterWithOrder:(long long)a0 handler:(id /* block */)a1;
- (id)initWithNode:(id)a0 children:(id)a1;
- (id)nodeByInsertingChild:(id)a0 atIndex:(long long)a1;
- (id)nodeByMovingChild:(id)a0 toIndex:(long long)a1;
- (id)nodeByRemovingChild:(id)a0;

@end
