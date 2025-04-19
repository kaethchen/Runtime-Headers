@class _FEFocusMapRect, NSString, NSArray, NSMutableArray, NSHashTable, NSMutableSet, _FEFocusMapSnapshotDebugInfo, _FEFocusSearchInfo, _FEFocusRegion, _FEFocusMovementInfo, _FEFocusSystem;
@protocol _FEFocusRegionContainer, _FECoordinateSpace;

@interface _FEFocusMapSnapshot : NSObject <_FEFocusRegionSearchContext> {
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    struct __CFDictionary { } *_subregionToRegionMap;
    struct __CFDictionary { } *_regionToOccludingRegionsMap;
    struct __CFDictionary { } *_regionToFocusItemCache;
    struct __CFDictionary { } *_regionFrameCache;
    NSMutableArray *_stateStack;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    NSHashTable *_uncachableEnvironments;
    NSArray *_regions;
    NSMutableSet *_visitedRegionContainers;
    struct { unsigned char didCaptureSnapshot : 1; unsigned char isSearchingRegionsOfInterestContainer : 1; unsigned char clipToSnapshotRect : 1; unsigned char ignoresRootContainerClippingRect : 1; } _flags;
}

@property (readonly, nonatomic, getter=_debugInfo) _FEFocusMapSnapshotDebugInfo *debugInfo;
@property (retain, nonatomic) _FEFocusSearchInfo *searchInfo;
@property (retain, nonatomic) _FEFocusMovementInfo *movementInfo;
@property (readonly, nonatomic, getter=_searchArea) _FEFocusMapRect *searchArea;
@property (readonly, nonatomic) BOOL hasOnlyStaticContent;
@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (readonly, nonatomic) id<_FECoordinateSpace> coordinateSpace;
@property (readonly, weak, nonatomic) id<_FEFocusRegionContainer> rootContainer;
@property (readonly, nonatomic) _FEFocusMapRect *mapArea;
@property (readonly, copy, nonatomic) _FEFocusRegion *focusedRegion;
@property (readonly, weak, nonatomic) id<_FEFocusRegionContainer> regionsContainer;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, copy, nonatomic) NSArray *originalRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addRegion:(id)a0;
- (id)debugQuickLookObject;
- (void)addRegions:(id)a0;
- (id)_cachedNextFocusedItemForRegion:(id)a0 withFocusMovementRequest:(id)a1 inMap:(id)a2;
- (void)_capture;
- (id)_debugInfoWithFocusMapSearchInfo:(id)a0;
- (id)_initWithSnapshotter:(id)a0 mapArea:(id)a1 searchArea:(id)a2;
- (void)_trackOccludingRegion:(id)a0 forRegion:(id)a1;
- (void)_trackSubregion:(id)a0 forRegion:(id)a1;
- (void)addRegionsInContainer:(id)a0;
- (void)addRegionsInContainers:(id)a0;
- (void)consumeRegionInformationForRegions:(id)a0 fromSnapshot:(id)a1;
- (void)markContainerAsProvidingDynamicContent;
- (id)occludingRegionsForRegion:(id)a0;
- (id)originalRegionForRegion:(id)a0;
- (id)regionsForOriginalRegion:(id)a0;
- (id)searchArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })snapshotFrameForRegion:(id)a0;

@end
