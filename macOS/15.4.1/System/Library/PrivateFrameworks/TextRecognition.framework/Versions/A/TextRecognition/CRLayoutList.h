@class NSArray;

@interface CRLayoutList : NSObject

@property (retain) NSArray *items;
@property (readonly) unsigned long long layoutDirection;

+ (id)listsWithRegionGroups:(id)a0;
+ (id)_groupGeometryInfoForGroup:(id)a0;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 layoutDirection:(unsigned long long)a1;

@end
