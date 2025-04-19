@class NSString, EDBusinessPersistence, NSObject;
@protocol OS_os_log;

@interface EDBusinessChatServicesBusinessesGrouping : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDBusinessPersistence *businessPersistence;
@property (nonatomic) unsigned long long addressesChecked;
@property (nonatomic) unsigned long long addressesToCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_fetchBusinessMetadataForAddresses:(id)a0 progressHandler:(id /* block */)a1;
- (id)businessConnectGroupingQueue;
- (id)initWithBusinessPersistence:(id)a0;
- (void)startBusinessConnectGroupingWithCancelationToken:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;

@end
