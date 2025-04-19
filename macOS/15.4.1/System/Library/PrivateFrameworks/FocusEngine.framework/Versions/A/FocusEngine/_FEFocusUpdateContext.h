@class _FEFocusMovementInfo, _FEDebugIssueReportFormatter, _FEFocusMapSearchInfo, NSString, NSArray, UIImage, _FEDebugLogReport, _FEDebugIssueReport, _FEFocusGuide, _FEFocusEnvironmentScrollableContainerTuple, _FEFocusItemInfo, _UIDynamicFocusGroupMap;
@protocol _FEFocusItem, _FEFocusUpdateRequesting, _FEFocusEnvironment, _FEFocusBehavior;

@interface _FEFocusUpdateContext : NSObject {
    struct { unsigned char isValid : 1; unsigned char hasValidated : 1; unsigned char shouldUpdateDestinationItem : 1; unsigned char sourceItemMayRemainFocused : 1; unsigned char didResolveCommonAncestorEnvironment : 1; } _flags;
}

@property (class, readonly, copy, nonatomic, getter=_defaultValidationReportFormatter) _FEDebugIssueReportFormatter *defaultValidationReportFormatter;

@property (retain, nonatomic, getter=_focusGroupMap, setter=_setFocusGroupMap:) _UIDynamicFocusGroupMap *focusGroupMap;
@property (readonly, nonatomic) id<_FEFocusBehavior> focusBehavior;
@property (readonly, nonatomic, getter=_request) id<_FEFocusUpdateRequesting> request;
@property (readonly, copy, nonatomic, getter=_sourceItemInfo) _FEFocusItemInfo *sourceItemInfo;
@property (readonly, copy, nonatomic, getter=_destinationItemInfo) _FEFocusItemInfo *destinationItemInfo;
@property (readonly, nonatomic, getter=_focusMovement) _FEFocusMovementInfo *focusMovement;
@property (retain, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _FEFocusMapSearchInfo *focusMapSearchInfo;
@property (readonly, weak, nonatomic, getter=_initialDestinationEnvironment) id<_FEFocusEnvironment> initialDestinationEnvironment;
@property (readonly, weak, nonatomic, getter=_commonAncestorEnvironment) id<_FEFocusEnvironment> commonAncestorEnvironment;
@property (retain, nonatomic, getter=_commonEnvironmentScrollableContainer, setter=_setCommonEnvironmentScrollableContainer:) _FEFocusEnvironmentScrollableContainerTuple *commonEnvironmentScrollableContainer;
@property (nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) double destinationViewDistanceOffscreen;
@property (nonatomic, getter=_isDeferredUpdate, setter=_setDeferredUpdate:) BOOL deferredUpdate;
@property (readonly, nonatomic, getter=_previouslyFocusedGroupIdentifier) NSString *previouslyFocusedGroupIdentifier;
@property (readonly, nonatomic, getter=_nextFocusedGroupIdentifier) NSString *nextFocusedGroupIdentifier;
@property (readonly, nonatomic, getter=_groupFilter) long long groupFilter;
@property (retain, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots;
@property (readonly, nonatomic, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation;
@property (retain, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _FEDebugLogReport *preferredFocusReport;
@property (retain, nonatomic, getter=_validationReport, setter=_setValidationReport:) _FEDebugIssueReport *validationReport;
@property (readonly, weak, nonatomic, getter=_focusedGuide) _FEFocusGuide *focusedGuide;
@property (readonly, nonatomic, getter=_focusRedirectedByGuide) BOOL focusRedirectedByGuide;
@property (readonly, nonatomic, getter=_focusVelocity) struct CGVector { double x0; double x1; } focusVelocity;
@property (readonly, weak, nonatomic) id<_FEFocusItem> previouslyFocusedItem;
@property (readonly, weak, nonatomic) id<_FEFocusItem> nextFocusedItem;
@property (readonly, nonatomic) unsigned long long focusHeading;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithContext:(id)a0;
- (BOOL)_validate;
- (id)debugQuickLookObject;
- (void)_didUpdateFocus;
- (id)_focusMapSnapshotDebugInfoArray;
- (void)_cacheFocusBehavior;
- (id)_initWithFocusMovementRequest:(id)a0 nextFocusedItem:(id)a1;
- (id)_initWithFocusUpdateRequest:(id)a0;
- (BOOL)_isFilteredToGroup;
- (BOOL)_isValidInFocusSystem:(id)a0;
- (id)_publicRegionMapSnapshots;
- (void)_restoreRestrictedFocusMovementWithMovement:(id)a0;
- (void)_setFocusRedirectedByGuide:(BOOL)a0;
- (void)_setFocusedGuide:(id)a0;
- (void)_setInitialDestinationEnvironment:(id)a0;
- (void)_setSourceItemInfo:(id)a0;
- (void)_updateDestinationItemIfNeeded;
- (void)_updateWithFocusGroupMap:(id)a0;
- (void)_willUpdateFocusFromFocusedItem:(id)a0;

@end
