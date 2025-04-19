@class STSField, NSString, STSHardwareManagerWrapper, NSObject, NFFieldDetectSession;
@protocol OS_dispatch_queue, STSListenerDelegate;

@interface STSListener : NSObject <NFFieldDetectSessionDelegate> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NFFieldDetectSession *_nearFieldFdSession;
    STSField *_lastField;
    STSHardwareManagerWrapper *_nfHwManager;
}

@property (readonly, weak, nonatomic) id<STSListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)stop;
- (void)didEndSession;
- (id)startWithDelegate:(id)a0;
- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)fieldDetectSession:(id)a0 didDetectField:(BOOL)a1;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)didStartSession:(id)a0;
- (void)didEnterField:(id)a0;
- (void)didExitField;

@end
