@class NSSet, NSArray, NSMutableDictionary;

@interface UAPasteboardGeneration : NSObject

@property (copy) NSSet *allTypes;
@property (copy) NSArray *items;
@property (retain) NSMutableDictionary *typePaths;
@property (readonly) unsigned long long generation;

- (void).cxx_destruct;
- (BOOL)addItem:(id)a0;
- (id)initWithGeneration:(unsigned long long)a0;
- (BOOL)addType:(id)a0 toItemAtIndex:(unsigned long long)a1;
- (void)fetchTypeURL:(id)a0;
- (id)getTypePaths;

@end
