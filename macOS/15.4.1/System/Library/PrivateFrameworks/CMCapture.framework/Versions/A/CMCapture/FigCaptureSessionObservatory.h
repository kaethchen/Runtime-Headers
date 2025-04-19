@class NSString, NSMapTable, NSHashTable, FigCaptureOSStateHandle, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureSessionObservatory : NSObject <FigCaptureOSStateDataProvider> {
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastRunningIdentifier;
    FigCaptureOSStateHandle *_osStateHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedObservatory;

- (void)dealloc;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession { } *)a0;
- (id)osStatePropertyList;

@end
