@class HMFTimer, HMSoftwareUpdateDescriptor, NSString, HMSoftwareUpdateProgress, HMDSoftwareUpdateEventProviderContext, NSMutableArray, HMSoftwareUpdateProgressEvent;

@interface HMDSoftwareUpdateEventProvider : HMFObject <HMFLogging, HMDSUControllerManagerDelegate, HMFTimerDelegate, HMDSoftwareUpdateEventProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMDSoftwareUpdateEventProviderContext *context;
@property (retain) NSMutableArray *scanFutures;
@property (copy) id /* block */ scanOptionsFactory;
@property (retain) HMFTimer *progressDebounceTimer;
@property (retain) HMSoftwareUpdateProgressEvent *debouncedProgressEvent;
@property (retain) HMSoftwareUpdateDescriptor *lastSentSoftwareUpdateDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMSoftwareUpdateProgress *lastSentSoftwareUpdateProgress;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)descriptorFromControllerStatus:(id)a0 controllerDescriptor:(id)a1 errorCode:(id)a2;
- (void)forwardDebouncedProgressEvent;
- (void)forwardDescriptorEventWithErrorCode:(id)a0;
- (void)forwardProgressEventWithProgress:(id)a0;
- (id)initWithContext:(id)a0 scanOptionsFactory:(id /* block */)a1 timerFactory:(id /* block */)a2;
- (void)manager:(id)a0 didChangeProgressOnDownload:(id)a1;
- (void)manager:(id)a0 didFailDownload:(id)a1 withError:(id)a2;
- (void)manager:(id)a0 didFailInstallation:(id)a1 withError:(id)a2;
- (void)manager:(id)a0 didFinishDownload:(id)a1;
- (void)manager:(id)a0 didFinishDownload:(id)a1 willProceedWithInstallation:(BOOL)a2 waitingForAdmissionControl:(BOOL)a3;
- (void)manager:(id)a0 didFinishDownload:(id)a1 willProceedWithInstallation:(BOOL)a2 waitingForAdmissionControl:(BOOL)a3 denialReasons:(id)a4;
- (void)manager:(id)a0 didFinishInstallation:(id)a1;
- (void)manager:(id)a0 scanRequestDidLocateUpdate:(id)a1 error:(id)a2;
- (void)manager:(id)a0 scanRequestPostponed:(id)a1 error:(id)a2;
- (void)respondToScanFuturesWithError:(id)a0;
- (void)scanWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
