@class NSString, SEMAdministrator, CKVTaskManager, NSObject;
@protocol OS_dispatch_queue;

@interface CKVAdminServiceFactory : NSObject <CKVAdminServiceProvider> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    SEMAdministrator *_semAdministrator;
    CKVTaskManager *_taskManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)a0 semAdministrator:(id)a1 taskManager:(id)a2;

@end
