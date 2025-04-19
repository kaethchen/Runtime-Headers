@class FBSDisplayLayoutMonitor, NSString, NSHashTable, NSDate;

@interface IRDisplayMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *defaultMainDisplayMonitor;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *continuityDisplayMonitor;
@property (retain, nonatomic) NSString *appInFocus;
@property (retain, nonatomic) NSDate *appInFocusTimestamp;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) BOOL displayLocked;
@property (nonatomic) BOOL isContinuityDisplay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_didUpdateContinuityDisplay:(id)a0;
- (void)_didUpdateMainDisplayLayout:(id)a0;
- (id)getAppInFocusWithTimestamp;

@end
