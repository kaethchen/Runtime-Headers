@class NSString, NSView, MKImageView, MKMapItem;

@interface MKPhotoBigAttributionView : NSView <MKPhotoBigAttributionViewSubclass> {
    MKImageView *_imageView;
    NSView *_backgroundView;
    BOOL _needsImageLoad;
}

@property (readonly, nonatomic) NSView *contentView;
@property (readonly, nonatomic) long long context;
@property (nonatomic) long long type;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bigAttributionViewForMapItem:(id)a0 attributionType:(long long)a1 isFirstParty:(BOOL)a2 context:(long long)a3;

- (void).cxx_destruct;
- (id)initWithContext:(long long)a0;
- (void)layout;
- (void)beginAnimatingActivityIndicator;
- (void)didEndAnimatingActivityIndicatorView;
- (void)didUpdateAttributionViewType;
- (void)didUpdateMapItem;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)updateBackgroundIfNeeded;
- (void)willStartAnimatingActivityIndicatorView;

@end
