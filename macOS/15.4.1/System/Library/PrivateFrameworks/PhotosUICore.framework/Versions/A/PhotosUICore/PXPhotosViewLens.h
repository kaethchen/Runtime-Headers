@class NSString;

@interface PXPhotosViewLens : NSObject <NSCopying, PXPhotosLensControlItem>

@property (class, readonly, nonatomic) PXPhotosViewLens *zoomableGrid;
@property (class, readonly, nonatomic) PXPhotosViewLens *grid;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) long long defaultSectionBodyStyle;
@property (readonly, nonatomic) BOOL wantsCuration;
@property (readonly, nonatomic) long long curationLength;
@property (readonly, nonatomic) BOOL isDefaultCurationLength;
@property (readonly, nonatomic) BOOL allowsActionMenu;
@property (readonly, nonatomic) BOOL allowsBlur;
@property (readonly, nonatomic) BOOL allowsScrollSnap;
@property (readonly, nonatomic) BOOL ignoresTopSafeAreaInset;
@property (readonly, nonatomic) BOOL allowsFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lensForCurationLength:(long long)a0 isDefault:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsActionType:(id)a0;
- (id)initWithTitle:(id)a0 symbolName:(id)a1 defaultSectionBodyStyle:(long long)a2;

@end
