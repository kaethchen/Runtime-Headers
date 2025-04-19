@class NSImageView, FMFNoLocationBackgroundView, NSImage, NSView, NSLayoutConstraint, NSTextView, NSString;
@protocol FMFNoLocationViewDelegate;

@interface FMFNoLocationView : NSView <NSAccessibilityImage>

@property (retain, nonatomic) NSLayoutConstraint *topInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint;
@property (retain, nonatomic) NSImage *offlineProfileImage;
@property (retain, nonatomic) NSImageView *offlineProfileImageView;
@property (retain, nonatomic) NSImageView *personImageView;
@property (retain, nonatomic) NSTextView *detailsLabel;
@property (retain, nonatomic) NSView *insetView;
@property (retain, nonatomic) FMFNoLocationBackgroundView *blur;
@property (weak, nonatomic) id<FMFNoLocationViewDelegate> delegate;
@property (nonatomic) BOOL blockLabelUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLabel;
- (void)addLayoutConstraints;
- (void)updateConstriantsForInsets;
- (void)updateLabelNotification:(id)a0;
- (void)updatePersonImageViewImage;

@end
