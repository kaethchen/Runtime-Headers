@class NSView, NSString, NSVisualEffectView;

@interface VUINSNavigationBarBackgroundView : NSView <VUINSNavigationBarLargeTitleUpdating>

@property (retain, nonatomic) NSView *separatorView;
@property (nonatomic) BOOL isSidebarEnabled;
@property (readonly, nonatomic) NSView *solidFillView;
@property (readonly, nonatomic) NSVisualEffectView *visualEffectFillView;
@property (nonatomic) BOOL wantsLargeTitleOcclusion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationBarBackgroundColor;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (id)_solidFillBackgroundColor;
- (long long)_visualEffectMaterial;
- (void)hideLargeTitle;
- (id)initWithSidebarEnabled:(BOOL)a0;
- (void)revealLargeTitle;

@end
