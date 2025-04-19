@class SCRCUserDefaults;
@protocol SCRCursorAutoHideDelegate;

@interface SCRCursorAutoHideManager : NSObject

@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (weak, nonatomic) id<SCRCursorAutoHideDelegate> delegate;
@property (readonly, nonatomic) BOOL hidden;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)_cancel;
- (id)initWithUserDefaults:(id)a0;
- (void)_forceHideFocusRing;
- (void)_hideFocusRing;
- (void)_showFocusRing;

@end
