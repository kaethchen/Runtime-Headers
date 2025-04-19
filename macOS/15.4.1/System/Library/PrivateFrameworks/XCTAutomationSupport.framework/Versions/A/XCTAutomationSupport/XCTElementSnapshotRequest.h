@class NSError, NSArray, XCTTimeoutControls, XCAccessibilityElement, XCAXCycleDetector, NSDictionary, NSObject, XCElementSnapshot;
@protocol XCTMacCatalystStatusProviding, NSCopying, OS_dispatch_queue, XCTAccessibilityFramework;

@interface XCTElementSnapshotRequest : NSObject

@property (copy) id<NSCopying> accessibilitySnapshot;
@property (retain) XCElementSnapshot *elementSnapshot;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property BOOL loadResult;
@property BOOL hasLoaded;
@property (retain) NSError *loadError;
@property (readonly) id<XCTAccessibilityFramework> accessibilityFramework;
@property (readonly) XCAccessibilityElement *element;
@property (readonly) NSArray *attributes;
@property (copy) NSDictionary *parameters;
@property (readonly) XCTTimeoutControls *timeoutControls;
@property (retain) XCAXCycleDetector *cycleDetector;
@property (retain) id<XCTMacCatalystStatusProviding> macCatalystStatusProvider;
@property BOOL preserveRemoteElementPlaceholders;

- (void).cxx_destruct;
- (id)_accessibilitySnapshotForElement:(id)a0 error:(id *)a1;
- (id)_childrenOfElement:(id)a0 rootElement:(id)a1 accessibilitySnapshot:(id)a2 error:(id *)a3;
- (id)_snapshotForElement:(id)a0 rootElement:(id)a1 accessibilitySnapshot:(id)a2 error:(id *)a3;
- (id)accessibilitySnapshotOrError:(id *)a0;
- (id)elementSnapshotOrError:(id *)a0;
- (id)initWithAccessibilityFramework:(id)a0 element:(id)a1 attributes:(id)a2 parameters:(id)a3;
- (id)initWithAccessibilityFramework:(id)a0 element:(id)a1 attributes:(id)a2 parameters:(id)a3 timeoutControls:(id)a4;
- (BOOL)loadSnapshotAndReturnError:(id *)a0;
- (id)safeParametersForParameters:(id)a0;

@end
