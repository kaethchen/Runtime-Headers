@interface PassKitCore.ProvisioningCarKeyStepTransact : NSObject <PKContactlessInterfaceSessionDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ credential;
    void /* unknown type, empty encoding */ sharedState;
    void /* unknown type, empty encoding */ commonCompletion;
    void /* unknown type, empty encoding */ sessionHandle;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ timeout;
}

- (id)init;
- (void).cxx_destruct;
- (void)contactlessInterfaceSession:(id)a0 didEndPersistentCardEmulationWithContext:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didFinishTransactionWithContext:(id)a1;
- (void)contactlessInterfaceSessionDidTerminate:(id)a0;
- (void)contactlessInterfaceSessionDidTerminate:(id)a0 withErrorCode:(unsigned long long)a1;

@end
