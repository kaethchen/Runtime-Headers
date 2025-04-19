@class ATXContextKitClient;

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContextKitClient:(id)a0;
- (BOOL)shouldAcceptSafariDonation:(id)a0;
- (BOOL)shouldBlockURLForObjectionableContent:(id)a0;

@end
