@class NSString, CESRSpeechProfileSiteResolver, NSObject;
@protocol OS_dispatch_queue;

@interface CESRSpeechProfileAdminServiceFactory : NSObject <CESRSpeechProfileAdminServiceProvider> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CESRSpeechProfileSiteResolver *_speechProfileSiteManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)a0 speechProfileSiteManager:(id)a1;

@end
