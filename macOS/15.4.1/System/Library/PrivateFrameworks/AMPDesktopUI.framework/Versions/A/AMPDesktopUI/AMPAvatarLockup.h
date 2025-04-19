@class NSView, NSObject;
@protocol AMPAvatarLockupModel;

@interface AMPAvatarLockup : NSButton {
    BOOL _fetchingArt;
    BOOL _actuallyRolledOver;
}

@property (retain, nonatomic) NSView *rolloverLayer;
@property (nonatomic) BOOL actuallyRolledOver;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *actualViewModel;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *viewModel;
@property (nonatomic) BOOL showRolledOver;

+ (void)initialize;
+ (id)lockup;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)commonInit;
- (void)drawFocusRingMask;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (BOOL)artworkFetchIsPending;
- (void)fetchArt;
- (id)propertyKeysForViewSpy;
- (void)reflectAction:(id)a0;

@end
