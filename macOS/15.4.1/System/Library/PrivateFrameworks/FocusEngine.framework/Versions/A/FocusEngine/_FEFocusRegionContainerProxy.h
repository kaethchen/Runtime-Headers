@class NSArray, _FEFocusEnvironmentContainerTuple, NSString;
@protocol _FEFocusItemContainer, _FEFocusEnvironment;

@interface _FEFocusRegionContainerProxy : NSObject <_FEFocusRegionContainer>

@property (retain, nonatomic) _FEFocusEnvironmentContainerTuple *environmentContainer;
@property (nonatomic) BOOL allowsLazyLoading;
@property (nonatomic) BOOL shouldCreateRegionForOwningItem;
@property (nonatomic) BOOL shouldCreateRegionForGuideBehavior;
@property (readonly, nonatomic) id<_FEFocusEnvironment> owningEnvironment;
@property (nonatomic) BOOL _areChildrenFocused;
@property (readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) BOOL focusDirectionFlippedHorizontally;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic) long long _focusPreferredMovementStyle;
@property (readonly, copy, nonatomic) NSArray *_focusLinearMovementSequence;
@property (readonly, weak, nonatomic) id<_FEFocusEnvironment> _parentFocusEnvironment;
@property (readonly, nonatomic) id<_FEFocusItemContainer> _focusItemContainer;
@property (readonly, copy, nonatomic) NSArray *_preferredFocusEnvironments;
@property (readonly, copy, nonatomic) NSString *_focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippingRectInCoordinateSpace:(id)a0;
- (void)_didUpdateFocusInContext:(id)a0;
- (id)_focusSystem;
- (id)_itemContainer;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)_shouldUpdateFocusInContext:(id)a0;
- (BOOL)_ui_isUIFocusRegionContainerProxy;
- (id)initWithEnvironmentContainer:(id)a0;
- (id)initWithOwningEnvironment:(id)a0 itemContainer:(id)a1;
- (id)preferredFocusEnvironments;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;

@end
