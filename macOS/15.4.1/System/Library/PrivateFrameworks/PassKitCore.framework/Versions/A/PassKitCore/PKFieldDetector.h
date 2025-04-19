@class PKFieldProperties, NSString, PKFieldPropertiesProbe, NSHashTable, NSObject, NFFieldDetectSession;
@protocol PKFieldDetectorDelegate, OS_dispatch_queue;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate> {
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _nfcRadioEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    unsigned long long _enablePersistentFieldDetectionReasons;
    PKFieldProperties *_fieldProperties;
    PKFieldPropertiesProbe *_fieldPropertiesProbe;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) id<PKFieldDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_notify;
- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)_endLookup;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (void)_invalidateFieldDetectSession;
- (void)_restartFieldDetectSession;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)_startFieldDetectSession;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)updateRadioState;

@end
