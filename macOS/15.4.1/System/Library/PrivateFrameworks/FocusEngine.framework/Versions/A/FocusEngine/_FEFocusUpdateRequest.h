@class _FEFocusInputDeviceInfo, _FEFocusSystem, NSString;
@protocol _FEFocusEnvironment;

@interface _FEFocusUpdateRequest : NSObject <_FEFocusUpdateRequesting, NSCopying>

@property (readonly, weak, nonatomic) id<_FEFocusEnvironment> destinationEnvironment;
@property (readonly, nonatomic) BOOL isFocusRemovalRequest;
@property (nonatomic) BOOL shouldPlayFocusSound;
@property (nonatomic) BOOL allowsFocusingCurrentItem;
@property (nonatomic) BOOL allowsOverridingPreferedFocusEnvironments;
@property (nonatomic) BOOL resetsUpdateThrottle;
@property (readonly, weak, nonatomic) id<_FEFocusEnvironment> environment;
@property (nonatomic) BOOL allowsDeferral;
@property (nonatomic, getter=shouldScrollIfNecessary) BOOL scrollIfNecessary;
@property (readonly, weak, nonatomic) _FEFocusSystem *focusSystem;
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;
@property (readonly, nonatomic) _FEFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForRemovingFocusInFocusSystem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)cacheCurrentFocusSystem;
- (BOOL)canMergeWithRequest:(id)a0;
- (id)initWithFocusSystem:(id)a0 environment:(id)a1;
- (id)initWithFocusSystem:(id)a0 environment:(id)a1 destinationEnvironment:(id)a2;
- (BOOL)isValidInFocusSystem:(id)a0;
- (id)requestByMergingWithRequest:(id)a0;
- (id)requestByRedirectingRequestToEnvironment:(id)a0;
- (id)requestByRedirectingRequestToNextContainerEnvironment;

@end
