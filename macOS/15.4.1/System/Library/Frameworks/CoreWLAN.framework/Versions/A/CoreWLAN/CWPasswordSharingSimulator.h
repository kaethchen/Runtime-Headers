@class CWInterface, NSString, SFPasswordSharingService;

@interface CWPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {
    SFPasswordSharingService *_service;
}

@property (readonly) CWInterface *interface;
@property (readonly) NSString *ssid;

- (void)run;
- (BOOL)service:(id)a0 shouldPromptForNetwork:(id)a1;
- (id)initWithInterface:(id)a0 ssid:(id)a1;
- (void)service:(id)a0 receivedNetworkInfo:(id)a1;

@end
