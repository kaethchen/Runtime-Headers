@class FAProfilePictureStore, NSMutableDictionary, NSStackView;

@interface FAMugshotMarqueeView : NSView {
    NSMutableDictionary *_memberPhotoMap;
    FAProfilePictureStore *_pictureStore;
    id /* block */ _membersFilter;
    NSStackView *_marquee;
}

+ (id)imageWithMemberFilter:(id /* block */)a0 profilePictureStore:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)shadowRadius;
- (id)_configureImageWithData:(id)a0;
- (void)_configureStackView;
- (id)_configureImageViewWithImage:(id)a0;
- (void)_configureMarquee;
- (void)_profilePictureStoreDidReloadImages:(id)a0;
- (id)initWithFamilyCircle:(id)a0 profilePictureStore:(id)a1;
- (id)initWithMemberFilter:(id /* block */)a0 profilePictureStore:(id)a1;

@end
