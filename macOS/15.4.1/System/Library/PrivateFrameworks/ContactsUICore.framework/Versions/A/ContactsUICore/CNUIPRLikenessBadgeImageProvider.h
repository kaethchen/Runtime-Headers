@class NSString, NSImage, NSData, CNCache;

@interface CNUIPRLikenessBadgeImageProvider : NSObject <CNUIPRLikenessProvider, CNUILikenessBadgeTypeProvider>

@property (readonly, nonatomic) CNCache *cache;
@property (retain, nonatomic) NSData *badgeImageData;
@property (retain, nonatomic) NSImage *badgeImage;
@property (nonatomic) unsigned long long badgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGImage { } *)_cnui_imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { } *)badgeCGImage;
- (id)initWithBadge:(id)a0;
- (struct CGImage { } *)renderCircularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderRoundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
