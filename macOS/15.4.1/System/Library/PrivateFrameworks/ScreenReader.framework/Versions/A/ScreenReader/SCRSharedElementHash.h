@class AXFMutableDiscontinuousArray, NSObject;
@protocol OS_dispatch_queue;

@interface SCRSharedElementHash : NSObject

@property (retain, nonatomic) AXFMutableDiscontinuousArray *_uiElements;
@property (retain, nonatomic) AXFMutableDiscontinuousArray *_textMarkers;
@property (retain, nonatomic) AXFMutableDiscontinuousArray *_attributeMarkers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic) BOOL _filling;

+ (id)sharedElementHashForUIElement:(id)a0 shouldCreate:(BOOL)a1;
+ (id)sharedElementHashKeyForUIElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;
- (void)_clipContentsOfSortedHashMarkers:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_coalesceBoundaryMarkersForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inMarkerArray:(id)a1;
- (void)_makeAttributeMarkersForContent:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_makeSharedMarkersForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_makeTextMarkersForContent:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_sharedTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)backgroundFillHashInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateHashMarkersFromIndex:(unsigned long long)a0 sharedUIElement:(id)a1 direction:(long long)a2 block:(id /* block */)a3;
- (id)hashMarkersForUIElement:(id)a0 markerListIndex:(unsigned long long)a1 axChildIndex:(unsigned long long)a2;
- (void)invalidateWithUIElement:(id)a0;
- (void)stopBackgroundFill;
- (void)updateWithUIElement:(id)a0;

@end
