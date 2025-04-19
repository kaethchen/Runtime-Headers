@class NSArray, _FEFocusGroupMap, _FEFocusSearchInfo, NSMutableArray;

@interface _FEFocusMapSearchInfo : NSObject

@property (retain, nonatomic) NSMutableArray *mutableSnapshots;
@property (retain, nonatomic) NSMutableArray *mutableDestinationRegions;
@property (retain, nonatomic) _FEFocusSearchInfo *searchInfo;
@property (nonatomic) BOOL didFindFocusBlockingBoundary;
@property (retain, nonatomic) NSArray *linearSortedFocusItems;
@property (retain, nonatomic) _FEFocusGroupMap *focusGroupMap;
@property (readonly, copy, nonatomic) NSArray *snapshots;
@property (readonly, copy, nonatomic) NSArray *destinationRegions;
@property (readonly, nonatomic) BOOL hasOnlyStaticContent;

- (id)init;
- (void).cxx_destruct;
- (void)addDestinationRegion:(id)a0;
- (void)addSnapshot:(id)a0;

@end
