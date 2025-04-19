@class _WMWindowProcessedDisplayReconfigActionInfo, _WMClientResizeWindowResponseActionInfo, _WMWindowOrderingInfo, _WMProposeKeyWindowActionInfo, _WMWindow, WMWindowPropertySnapshot, _WMReplaceWindowSetWindowActionInfo, NSSet, _WMAssignToSpacesActionInfo, _WMRestoreTilingStateActionInfo, NSArray, _WMOrderAllWindowsFrontActionInfo, _WMRemoveWindowFromUserSetActionInfo, _WMRequestTilingPositionActionInfo;

@interface WMWindowTransactionAction : NSObject <NSCopying>

@property (readonly, nonatomic) WMWindowPropertySnapshot *snapshot;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) _WMWindow *window;
@property (readonly, copy, nonatomic) NSArray *windowIDs;
@property (readonly, nonatomic) unsigned long long spaceID;
@property (readonly, copy, nonatomic) NSSet *fences;
@property (readonly, nonatomic) unsigned long long updatedProperties;
@property (readonly, copy, nonatomic) _WMWindowOrderingInfo *orderingInfo;
@property (readonly, copy, nonatomic) _WMOrderAllWindowsFrontActionInfo *orderAllWindowsFrontInfo;
@property (readonly, copy, nonatomic) _WMReplaceWindowSetWindowActionInfo *replaceWindowSetWindowInfo;
@property (readonly, copy, nonatomic) _WMProposeKeyWindowActionInfo *proposeKeyWindowInfo;
@property (readonly, copy, nonatomic) _WMRemoveWindowFromUserSetActionInfo *removeWindowFromUserSetInfo;
@property (readonly, copy, nonatomic) _WMAssignToSpacesActionInfo *assignToSpacesInfo;
@property (readonly, copy, nonatomic) _WMRequestTilingPositionActionInfo *requestTilingPositionActionInfo;
@property (readonly, copy, nonatomic) _WMRestoreTilingStateActionInfo *restoreTilingStateActionInfo;
@property (readonly, copy, nonatomic) _WMClientResizeWindowResponseActionInfo *clientResizeWindowResponseActionInfo;
@property (readonly, copy, nonatomic) _WMWindowProcessedDisplayReconfigActionInfo *windowProcessedDisplayReconfigActionInfo;

+ (id)actionForCreatingWindow:(id)a0 fences:(id)a1;
+ (id)actionForAssignToSpacesActionInfo:(id)a0 fences:(id)a1;
+ (id)actionForBeginningTerminationWithFences:(id)a0;
+ (id)actionForCancellingTerminationWithFences:(id)a0;
+ (id)actionForClearDisplayAffinityForWindows:(id)a0 fences:(id)a1;
+ (id)actionForClientResizeWindowResponseActionInfo:(id)a0 fences:(id)a1;
+ (id)actionForCyclingWindowsBackwardWithFences:(id)a0;
+ (id)actionForCyclingWindowsForwardWithFences:(id)a0;
+ (id)actionForDeminiaturizingWindows:(id)a0 fences:(id)a1;
+ (id)actionForDestroyingWindow:(id)a0 fences:(id)a1;
+ (id)actionForDidEnterFullscreen:(id)a0 fences:(id)a1;
+ (id)actionForDidExitFullscreen:(id)a0 toSpace:(unsigned long long)a1 fences:(id)a2;
+ (id)actionForFinishingLoginTransitionWithFences:(id)a0;
+ (id)actionForFinishingRestorationWithFences:(id)a0;
+ (id)actionForMiniaturizingWindows:(id)a0 fences:(id)a1;
+ (id)actionForOrderingAllWindowsFrontWithInfo:(id)a0 fences:(id)a1;
+ (id)actionForOrderingWindowWithInfo:(id)a0 fences:(id)a1;
+ (id)actionForRemoveWindowFromUserSetActionInfo:(id)a0 fences:(id)a1;
+ (id)actionForReplacingWindowSetWindowWithInfo:(id)a0 fences:(id)a1;
+ (id)actionForRequestTilingPositionActionInfo:(id)a0 fences:(id)a1;
+ (id)actionForRestoreTilingStateActionInfo:(id)a0 fences:(id)a1;
+ (id)actionForStartingLoginTransitionWithFences:(id)a0;
+ (id)actionForUpdatingWindow:(id)a0 updatedProperties:(unsigned long long)a1 fences:(id)a2;
+ (id)actionForWillEnterFullscreen:(id)a0 fences:(id)a1;
+ (id)actionForWillExitFullscreen:(id)a0 toSpace:(unsigned long long)a1 fences:(id)a2;
+ (id)actionForWindowProcessedDisplayReconfigActionInfo:(id)a0 fences:(id)a1;
+ (id)_createWindowPropertySnapshotForWindow:(id)a0 properties:(unsigned long long)a1;
+ (id)actionForHidingApplicationWithFences:(id)a0;
+ (id)actionForOrderingAllWindowsFrontWithFences:(id)a0;
+ (id)actionForProposingKeyWindowWithInfo:(id)a0 fences:(id)a1;
+ (id)actionForProposingMainWindowWithInfo:(id)a0 fences:(id)a1;
+ (id)actionForUnhidingApplicationWithFences:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithActionType:(long long)a0 fences:(id)a1;
- (id)initWithApplicationLifecycleType:(long long)a0 fences:(id)a1;
- (id)initWithAssignToSpacesActionInfo:(id)a0 fences:(id)a1;
- (id)initWithClearDisplayAffinityForWindows:(id)a0 fences:(id)a1;
- (id)initWithClientResizeWindowResponseActionInfo:(id)a0 fences:(id)a1;
- (id)initWithCyclingType:(long long)a0 fences:(id)a1;
- (id)initWithFullscreenTransitionType:(long long)a0 windowIDs:(id)a1 spaceID:(unsigned long long)a2 fences:(id)a3;
- (id)initWithHidingType:(long long)a0 fences:(id)a1;
- (id)initWithLifecycleActionType:(long long)a0 window:(id)a1 updatedProperties:(unsigned long long)a2 fences:(id)a3;
- (id)initWithLoginTransitionType:(long long)a0 fences:(id)a1;
- (id)initWithMiniaturizationType:(long long)a0 windows:(id)a1 fences:(id)a2;
- (id)initWithOrderAllWindowsFrontActionInfo:(id)a0 fences:(id)a1;
- (id)initWithOrderingInfo:(id)a0 fences:(id)a1;
- (id)initWithProposeKeyAndMainWindowRequestType:(long long)a0 windowInfo:(id)a1 fences:(id)a2;
- (id)initWithRemoveWindowFromUserSetActionInfo:(id)a0 fences:(id)a1;
- (id)initWithReplaceWindowSetWindowInfo:(id)a0 fences:(id)a1;
- (id)initWithRequestTilingPositionActionInfo:(id)a0 fences:(id)a1;
- (id)initWithRestoreTilingStateActionInfo:(id)a0 fences:(id)a1;
- (id)initWithWindowProcessedDisplayReconfigActionInfo:(id)a0 fences:(id)a1;

@end
