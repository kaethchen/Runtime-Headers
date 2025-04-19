@class NSSharingService, NSString, NSObject;
@protocol NSSharingServiceDelegate;

@interface SHKNextTransportServiceDelegate : NSObject <NSSharingServiceDelegate>

@property (retain) NSObject<NSSharingServiceDelegate> *originalDelegate;
@property (retain) NSSharingService *originalSharingService;
@property (copy) id /* block */ didShareCompletionBlock;
@property (copy) id /* block */ didFailCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;

@end
