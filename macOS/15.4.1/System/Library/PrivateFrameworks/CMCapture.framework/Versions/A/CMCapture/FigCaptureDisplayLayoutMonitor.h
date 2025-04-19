@class FBSDisplayLayoutMonitor, NSString, FigCaptureDisplayLayout, NSArray, FigCaptureOSStateHandle, NSMutableArray;

@interface FigCaptureDisplayLayoutMonitor : NSObject <FigCaptureOSStateDataProvider> {
    struct OpaqueFigSimpleMutex { } *_layoutObserversLock;
    NSMutableArray *_layoutObservers;
    struct OpaqueFigSimpleMutex { } *_layoutLock;
    FigCaptureDisplayLayout *_layout;
    NSArray *_elementIdentifiersToIgnore;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    FigCaptureOSStateHandle *_osStateHandle;
}

@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic, getter=isDisplayConnected) BOOL displayConnected;
@property (readonly, nonatomic) FigCaptureDisplayLayout *currentLayout;
@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedContinuityDisplayLayoutMonitor;
+ (id)sharedDisplayLayoutMonitor;
+ (id)sharedExternalDisplayLayoutMonitor;

- (void)dealloc;
- (void)addLayoutObserver:(id)a0;
- (void)addLayoutObserverWithoutImmediateCallback:(id)a0;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(void /* function */ *)a0 displayType:(long long)a1;
- (id)osStatePropertyList;
- (void)removeLayoutObserver:(id)a0;

@end
