@class NSTimer, NSString;

@interface SCRCaptionsProvider : SCROpaqueElementProviderGroup

@property (nonatomic) BOOL shouldFollowNewText;
@property (nonatomic) long long _followingSpeed;
@property (retain, nonatomic) NSTimer *_followTimer;
@property (retain, nonatomic) NSString *_cachedFirstItemValue;

+ (double)_timeIntervalFromFollowingSpeed:(long long)a0;
+ (id)_verbosityRotorItemTitleForIndex:(unsigned long long)a0;
+ (long long)_verbosityRotorSpeedForPreferencesValue:(id)a0;
+ (id)_verbosityRotorValueForIndex:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actionNames;
- (id)descriptionForAction:(id)a0;
- (BOOL)_performOverrideActionOverride:(id)a0;
- (void)_dispatchFollowingTimerFired;
- (id)_overrideActions;
- (id)_overrideDescriptionForAction:(id)a0;
- (void)_registerPreferenceObservers;
- (void)_removePreferenceObservers;
- (void)_setupFollowingTimer;
- (void)_teardownFollowingTimer;
- (void)_toggleFollowAction;
- (void)_updateBrailleFollowSpeedToPreferenceValue:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addUpdatedItemCount:(unsigned long long)a0 request:(id)a1;
- (id)buildVerbosityRotorGuides;
- (id)firstChildForFocusing;
- (BOOL)handleLayoutChangeWithInfo:(id)a0;
- (void)handleVerbosityRotorDidSelectItemAtIndex:(unsigned long long)a0 userInfo:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)lastChildForFocusing;
- (BOOL)performActionOverride:(id)a0;
- (BOOL)shouldMoveToNewFocusElementForLayoutChange:(id)a0;

@end
