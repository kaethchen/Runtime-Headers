@interface FamilyCircleUI.AccountStatusObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ accountStore;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;

@end
