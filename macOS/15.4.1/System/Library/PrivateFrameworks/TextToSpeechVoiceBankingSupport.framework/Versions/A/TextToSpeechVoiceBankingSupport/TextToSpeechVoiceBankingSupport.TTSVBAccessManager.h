@interface TextToSpeechVoiceBankingSupport.TTSVBAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ tccNotifyToken;
    void /* unknown type, empty encoding */ isMonitoringAccountChanges;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountStore;
    void /* unknown type, empty encoding */ currentChallengeContext;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;

@end
