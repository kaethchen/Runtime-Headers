@class NSHashTable, PXGEngine, PXGRenderFrame, NSArray, PXGHostingControllerProposedSize, PXGConcreteEngineControllerConfiguration, PXApplicationState, PXGAsyncScrollController, PXGPixelBufferMetalRenderDestination, NSObject, NSString, PXGLayout;
@protocol OS_dispatch_queue;

@interface PXGHostingController : NSObject <PXGEngineDelegate, PXChangeObserver>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedQueue;

@property (readonly, nonatomic) BOOL clientQueue_isPerformingChanges;
@property (readonly, nonatomic) PXGConcreteEngineControllerConfiguration *clientQueue_configuration;
@property (readonly, nonatomic) NSHashTable *clientQueue_activePresenters;
@property (retain, nonatomic) PXGConcreteEngineControllerConfiguration *layoutQueue_configuration;
@property (nonatomic) BOOL layoutQueue_isAppInactive;
@property (readonly, nonatomic) PXGAsyncScrollController *layoutQueue_scrollController;
@property (readonly, nonatomic) PXGEngine *layoutQueue_engine;
@property (readonly, nonatomic) PXGPixelBufferMetalRenderDestination *layoutQueue_renderDestination;
@property (readonly, nonatomic) PXGLayout *layoutQueue_placeholderLayout;
@property (copy, nonatomic) id /* block */ layoutQueue_pendingRootLayoutPromise;
@property (retain, nonatomic) PXGHostingControllerProposedSize *layoutQueue_pendingProposedSize;
@property (nonatomic) BOOL layoutQueue_pendingProposedSizeWasDelayed;
@property (nonatomic) long long layoutQueue_skipFramesCount;
@property (nonatomic) long long layoutQueue_skipDegradedFramesCount;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSHashTable *lock_observers;
@property (readonly, nonatomic) PXGRenderFrame *lock_lastFrame;
@property (readonly, nonatomic) PXApplicationState *mainQueue_applicationState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, copy, nonatomic) NSArray *presenters;
@property (copy, nonatomic) id /* block */ onPresentersDidChange;
@property (readonly) PXGRenderFrame *lastFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_layoutQueue_applyConfiguration;
- (void)clientQueue_presenterDidChange:(id)a0;
- (void)_clientQueue_propagateConfigurationToEngine;
- (void)_dispatchFrame:(id)a0 async:(BOOL)a1 toObserver:(id)a2;
- (void)_distributeFrame:(id)a0;
- (void)_layoutQueue_performInitialEngineSetupIfNeeded;
- (void)_mainQueue_initialize;
- (void)_mainQueue_updateIsAppInactive;
- (void)_notePresentersDidChange;
- (id)addPresenter;
- (BOOL)engine:(id)a0 shouldRenderLayout:(id)a1 sprites:(id)a2;
- (void)engineSetNeedsUpdate:(id)a0;
- (id)initWithClientQueue:(id)a0 layoutQueue:(id)a1;
- (id)initWithClientQueue:(id)a0 layoutQueue:(id)a1 initialConfiguration:(id /* block */)a2;
- (BOOL)layoutQueue_acceptSize:(id)a0;
- (void)layoutQueue_applySize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutQueue_skipFrameCount:(long long)a0 forProposedSize:(id)a1;
- (void)registerFrameObserver:(id)a0;
- (void)unregisterFrameObserver:(id)a0;

@end
