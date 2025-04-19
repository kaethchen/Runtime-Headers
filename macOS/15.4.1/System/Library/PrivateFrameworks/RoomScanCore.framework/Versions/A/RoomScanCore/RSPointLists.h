@class NSMutableArray;

@interface RSPointLists : NSObject {
    NSMutableArray *_pointLists_array;
    NSMutableArray *_wallLists_array;
    NSMutableArray *_outerPointList_array;
}

- (id)init;
- (void).cxx_destruct;
- (id)getRSPointLists;
- (void)generateRSPointListsWithWalls:(id)a0;
- (id)getRSOuterPointList;
- (id)getRSWallLists;

@end
