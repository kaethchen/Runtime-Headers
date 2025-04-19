@class NSSharingService, NSString;

@interface BrowserSharingService : NSSharingService <NSSharingServiceDelegate>

@property (readonly, nonatomic) NSSharingService *sharingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSharingService:(id)a0 title:(id)a1 items:(id)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 image:(id)a1 alternateImage:(id)a2 items:(id)a3 handler:(id /* block */)a4;

@end
