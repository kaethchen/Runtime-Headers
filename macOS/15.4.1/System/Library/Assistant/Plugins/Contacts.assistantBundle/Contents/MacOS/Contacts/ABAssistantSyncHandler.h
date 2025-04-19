@class ABAssistantSyncWorker, NSString, ABAddressBook;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler> {
    ABAddressBook *_addressBook;
}

@property (retain, nonatomic) ABAssistantSyncWorker *syncWorker;
@property (retain, nonatomic) ABAddressBook *addressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (id)currentSyncSnapshot;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;

@end
