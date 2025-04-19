@class NSObject, SEMIndexSiteManager, SEMSettings;
@protocol OS_dispatch_queue;

@interface SEMAdminConnection : NSObject <SEMAdminService> {
    SEMSettings *_settings;
    SEMIndexSiteManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)beginEvaluation:(id)a0 completion:(id /* block */)a1;
- (id)initWithSettings:(id)a0 indexSiteManager:(id)a1 queue:(id)a2;

@end
