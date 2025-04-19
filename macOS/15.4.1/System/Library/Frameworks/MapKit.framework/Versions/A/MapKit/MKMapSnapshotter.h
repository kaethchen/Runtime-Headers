@class MKMapSnapshotOptions, VKMapSnapshotCreator, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _completionHandler;
    geo_isolater *_isolation;
    VKMapSnapshotCreator *_lodpiSnapshotCreator;
    VKMapSnapshotCreator *_hidpiSnapshotCreator;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)cancel;
- (void)_cancel;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_failWithError:(id)a0;
- (void)_performSnapshotOnSnapshotQueue;
- (void)_cleanupSnapshotCreator;
- (void)_deliverSnapshot:(id)a0;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)a0;
- (BOOL)_isWidget;
- (void)_performSnapshot;
- (void)_respondWithError:(id)a0;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (BOOL)_shouldRenderLogoForSnapshotDimensions;
- (void)_succeedWithSnapshot:(id)a0;

@end
