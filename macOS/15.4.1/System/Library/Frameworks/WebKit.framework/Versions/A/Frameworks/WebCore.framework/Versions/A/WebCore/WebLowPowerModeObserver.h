@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> { struct LowPowerModeNotifier *m_ptr; } notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)detach;
- (void)_didReceiveLowPowerModeChange;
- (id)initWithNotifier:(void *)a0;

@end
