@class CNAvatarCache, NSImage, FIRadialProgressView, CNAvatarViewController, FIAirDropListViewItem;

@interface FIAirDropRadialProgressButton : FI_TButton {
    FIRadialProgressView *_radialProgressView;
    CNAvatarViewController *_avatarViewController;
    NSImage *_closeImage;
    NSImage *_blankImage;
    NSImage *_icon;
    struct vector<TKeyValueBinder, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__begin_; struct TKeyValueBinder *__end_; struct __compressed_pair<TKeyValueBinder *, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__value_; } __end_cap_; } _bindings;
    FIAirDropListViewItem *_airDropListViewItem;
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__value_; } __end_cap_; } _keyValueObservers;
}

@property (copy, nonatomic) NSImage *icon;
@property (readonly, retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) FIAirDropListViewItem *airDropListViewItem;
@property (nonatomic) double percentComplete;
@property (nonatomic, getter=isCancellable) BOOL cancellable;
@property (retain, nonatomic) CNAvatarCache *sharedAvatarCache;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImagesAndIcons;

@end
