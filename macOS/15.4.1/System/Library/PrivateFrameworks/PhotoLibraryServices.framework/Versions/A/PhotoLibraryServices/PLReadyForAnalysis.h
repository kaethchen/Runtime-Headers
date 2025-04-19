@class NSString, PFStateCaptureHandler, PLLibraryServicesManager, NSDate, PLLazyObject;

@interface PLReadyForAnalysis : NSObject <PFStateCaptureProvider> {
    PLLibraryServicesManager *_lsm;
    PLLazyObject *_lazyAppPrivateData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned short _lock_readyState;
    char _lock_checkLevel;
    NSString *_lock_status;
    NSDate *_lock_lastLogDate;
    PFStateCaptureHandler *_stateCaptureHandler;
    _Atomic short _atomic_readyState;
    _Atomic char _atomic_checkLevel;
}

@property (readonly) BOOL isReadyForAnalysis;
@property (readonly) BOOL isReadyForAnalysisQuickCheck;
@property (readonly) BOOL isReadyForAnalysisInitialDownloadCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)stateCaptureDictionary;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)appPrivateData;
- (void)_lock_logIfPermittedWithString:(id)a0;
- (void)_lock_updateCheckLevelIfNeeded:(char)a0;
- (void)_lock_checkCPLInitialDownloadStatusForState:(unsigned short)a0;
- (void)_lock_checkComputeCacheStatusForState:(unsigned short)a0;
- (void)_lock_checkIsReadyForAnalysisForState:(unsigned short)a0;
- (void)_lock_checkReadyForCPLStatusForState:(unsigned short)a0;
- (BOOL)_lock_isReadyForAnalysisState:(unsigned short)a0;
- (void)_lock_updateAndLogStatusWithString:(id)a0;
- (void)_lock_updateStateCaptureData;
- (id)_statusLogPrefix;
- (void)resetReadyForAnalysisState;

@end
