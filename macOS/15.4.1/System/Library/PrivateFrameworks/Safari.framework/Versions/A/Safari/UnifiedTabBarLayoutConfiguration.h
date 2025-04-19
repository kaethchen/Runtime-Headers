@class NSIndexSet;

@interface UnifiedTabBarLayoutConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long numberOfTabs;
@property (nonatomic) unsigned long long numberOfPinnedTabs;
@property (readonly, nonatomic) unsigned long long numberOfUnpinnedTabs;
@property (nonatomic) unsigned long long activeTabBarItemIndex;
@property (nonatomic) unsigned long long tabBarItemIndexScrollTarget;
@property (nonatomic) unsigned long long dragSourceIndex;
@property (nonatomic) unsigned long long dropIndex;
@property (retain, nonatomic) NSIndexSet *draggedIndices;
@property (nonatomic) unsigned long long numberOfTabBarItemsDuringInteractiveTabClosing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tabBarBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titlebarMainContentLayoutFrameForCentering;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollViewClipViewBounds;
@property (nonatomic) double scrollViewDocumentViewWidth;
@property (nonatomic) unsigned long long layoutOptions;
@property (nonatomic) BOOL showOnlyActiveTab;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
