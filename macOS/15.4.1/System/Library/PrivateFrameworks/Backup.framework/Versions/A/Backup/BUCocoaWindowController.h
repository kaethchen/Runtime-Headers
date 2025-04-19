@interface BUCocoaWindowController : NSObject {
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _notificationCenterObservers;
}

@property (retain, nonatomic) BUCocoaWindowController *selfReference;
@property (nonatomic) double maxX;
@property (nonatomic) double minY;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWindow:(id)a0;
- (BOOL)interceptsWindowClose:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowWillChangeFrame:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
