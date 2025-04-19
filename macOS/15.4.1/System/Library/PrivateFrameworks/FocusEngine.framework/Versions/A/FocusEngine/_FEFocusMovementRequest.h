@class NSString, _FEFocusItemInfo, _FEFocusSearchInfo, _FEFocusMovementInfo, _FEFocusInputDeviceInfo, _FEFocusSystem;

@interface _FEFocusMovementRequest : NSObject <_FEFocusUpdateRequesting>

@property (retain, nonatomic) _FEFocusItemInfo *focusedItemInfo;
@property (retain, nonatomic) _FEFocusMovementInfo *movementInfo;
@property (retain, nonatomic) _FEFocusSearchInfo *searchInfo;
@property (retain, nonatomic) _FEFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) _FEFocusMovementRequest *fallbackRequest;
@property (nonatomic) BOOL shouldPerformHapticFeedback;
@property (nonatomic) BOOL overridesDeferredFocusUpdate;
@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic, getter=shouldScrollIfNecessary) BOOL scrollIfNecessary;
@property (readonly, nonatomic) BOOL shouldPlayFocusSound;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL allowsFocusingCurrentItem;
@property (readonly, nonatomic) BOOL allowsDeferral;
@property (readonly, nonatomic) BOOL allowsOverridingPreferedFocusEnvironments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
