@class NSString, NSObject;
@protocol LACGlobalDomainDTO, OS_dispatch_queue, LACDTOKVStore;

@interface LACDTOKVStoreMigrationController : NSObject <LACDTOKVStoreMigrationController> {
    id<LACDTOKVStore> _store;
    id<LACGlobalDomainDTO> _defaults;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
