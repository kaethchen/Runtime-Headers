@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence;

- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0 categorySubsystem:(id)a1;
- (id)newAccountRepository;
- (id)newActivityRegistry;
- (id)newClientResumerWithClientState:(id)a0;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)a0;
- (id)newFetchController;
- (id)newMailboxRepository;
- (id)newMessageRepositoryWithResumable:(id)a0;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)newSenderRepository;
- (id)newVIPManagerInterface;
- (id)sharedInteractionLogger;
- (void)test_tearDown;

@end
