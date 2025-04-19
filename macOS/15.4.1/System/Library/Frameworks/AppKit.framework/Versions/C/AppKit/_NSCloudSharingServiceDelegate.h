@class NSString, NSSharingService;

@interface _NSCloudSharingServiceDelegate : NSObject <NSCloudSharingServiceDelegate> {
    NSSharingService *_service;
    id /* block */ _parentWindowProvider;
    id /* block */ _completionHandler;
}

@property (readonly) BOOL preShareFailureMeansStopSharing;
@property (retain) id selfReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 parentWindowProvider:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;

@end
