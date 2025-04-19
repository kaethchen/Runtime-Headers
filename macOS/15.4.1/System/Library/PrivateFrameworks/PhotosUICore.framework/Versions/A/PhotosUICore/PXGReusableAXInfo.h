@class NSString, NSArray, PXReusableObjectPool, NSObject, PXGBasicAXGroup;
@protocol PXAccessibleDisplayAsset, PXAnonymousView;

@interface PXGReusableAXInfo : NSAccessibilityElement <NSAccessibilitySlider, PXGAXInfo, PXReusableObject>

@property (class, readonly, nonatomic) PXReusableObjectPool *sharedPool;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long axContentKind;
@property (weak, nonatomic) PXGBasicAXGroup *axContainingGroup;
@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) struct { struct { double x; double y; double z; } center; void /* unknown type, empty encoding */ size; } spriteGeometry;
@property (nonatomic) struct { float alpha; void /* unknown type, empty encoding */ contentsRect; void /* unknown type, empty encoding */ clippingRect; struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius; float zSortOffset; float rotation; float scale; float contentsRotation; unsigned short resizableCapInsetsIndex; unsigned char contentsGravity; void /* unknown type, empty encoding */ anchorPoint; float translationZ; struct { void /* unknown type, empty encoding */ columns[4]; } focusTransform; } spriteStyle;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } spriteStyleCornerRadius;
@property (nonatomic) long long focusRingType;
@property (nonatomic) long long alternateUIVisibility;
@property (readonly, nonatomic) id content;
@property (nonatomic) BOOL axAccessibleWhenTransparent;
@property (nonatomic) BOOL allowDecorations;
@property (retain, nonatomic) NSArray *axDecorations;
@property (retain, nonatomic) NSString *axIdentifier;
@property (readonly, nonatomic) NSString *axText;
@property (readonly, nonatomic) NSString *axTitle;
@property (readonly, nonatomic) NSString *axSubtitle;
@property (readonly, nonatomic) NSString *axImageName;
@property (readonly, nonatomic) id<PXAccessibleDisplayAsset> axAsset;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *axView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axFrame;
@property (readonly, nonatomic) BOOL axIsSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_assetHasContentSourceInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_imageAXLabelInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_textInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_titleSubtitleInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (Class)_viewClassInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityValue;
- (id)accessibilityValueDescription;
- (BOOL)isAccessibilityAlternateUIVisible;
- (void)becomeReusable;
- (id)_neighboringSiblingInDirection:(unsigned long long)a0;
- (id)_defaultAXAttributeNames;
- (BOOL)_fillForKind:(long long)a0 withLayout:(id)a1 spriteIndex:(unsigned int)a2;
- (id)_neighboringAssetSiblingInDirection:(unsigned long long)a0;
- (id)_neighboringNonAssetSiblingInDirection:(unsigned long long)a0;
- (BOOL)_performScrollToVisibleAction;
- (id)_siblingInDirection:(unsigned long long)a0;
- (id)_titleSubtitleLabel;
- (id)_viewAtSpriteIndex:(unsigned int)a0;
- (void)applyToInfo:(id)a0;
- (BOOL)fillContentForContentKind:(long long)a0 inLayout:(id)a1 atIndex:(unsigned int)a2;
- (void)setContent:(id)a0 ofContentKind:(long long)a1;

@end
