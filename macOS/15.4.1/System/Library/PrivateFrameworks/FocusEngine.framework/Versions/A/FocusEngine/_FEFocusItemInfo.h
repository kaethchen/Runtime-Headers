@class NSArray, _FEFocusRegion;
@protocol _FEFocusItem;

@interface _FEFocusItemInfo : NSObject <NSCopying> {
    struct { unsigned char hasResolvedFocusTouchSensitivityStyle : 1; unsigned char hasResolvedFocusMovementFlippedHorizontally : 1; unsigned char hasResolvedFocusedRegion : 1; unsigned char hasResolvedRotaryFocusMovementAxis : 1; unsigned char useFallbackAncestorScroller : 1; } _flags;
}

@property (readonly, weak, nonatomic) id<_FEFocusItem> item;
@property (readonly, copy, nonatomic) NSArray *ancestorEnvironmentScrollableContainers;
@property (readonly, nonatomic) long long inheritedFocusMovementStyle;
@property (readonly, nonatomic) long long focusTouchSensitivityStyle;
@property (readonly, nonatomic) long long rotaryFocusMovementAxis;
@property (readonly, nonatomic) BOOL useFallbackAncestorScroller;
@property (readonly, nonatomic, getter=isFocusMovementFlippedHorizontally) BOOL focusMovementFlippedHorizontally;
@property (readonly, nonatomic) _FEFocusRegion *focusedRegion;

+ (id)infoWithItem:(id)a0;
+ (id)infoWithItem:(id)a0 useFallbackAncestorScroller:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)_createFocusedRegion;
- (id)_initWithItem:(id)a0 containingView:(id)a1 useFallbackAncestorScroller:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusedRectInCoordinateSpace:(id)a0;
- (void)invalidateFocusedRegion;

@end
