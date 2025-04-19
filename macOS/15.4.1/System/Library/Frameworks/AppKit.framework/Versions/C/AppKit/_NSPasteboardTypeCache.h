@class NSSet, NSMapTable, NSMutableSet, NSMutableArray;

@interface _NSPasteboardTypeCache : NSObject {
    NSMutableArray *_cachedTypeNames;
    NSMutableSet *_cachedTypeNameUnion;
    NSMutableSet *_conformingTypeIdentifiers;
    NSMapTable *_cachedRequestOnlyTypeNames;
}

@property (readonly, nonatomic) NSSet *cachedTypeNameUnion;
@property (readonly, nonatomic) NSMutableArray *cachedTypeNames;

- (void)dealloc;
- (id)init;
- (id)_conformingTypeIdentifiers;
- (void)addRequestOnlyType:(id)a0 forIndex:(long long)a1;
- (id)requestOnlyTypesForIndex:(long long)a0;

@end
