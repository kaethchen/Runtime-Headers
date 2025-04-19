@class NSSharingService, NSArray, NSDictionary, BrowserViewController;

@interface BrowserSharingOperation : NSObject

@property (readonly, nonatomic) NSSharingService *sharingService;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSDictionary *sharingServiceParameters;
@property (readonly, nonatomic) BrowserViewController *browserViewController;

- (void).cxx_destruct;
- (id)initWithSharingService:(id)a0 items:(id)a1 sharingServiceParameters:(id)a2 browserViewController:(id)a3;

@end
