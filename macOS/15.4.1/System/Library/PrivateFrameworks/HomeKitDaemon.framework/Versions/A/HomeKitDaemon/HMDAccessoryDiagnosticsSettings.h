@class HMDService, HAPSupportedDiagnosticsSnapshot, NSString;

@interface HMDAccessoryDiagnosticsSettings : NSObject

@property (readonly) HMDService *diagnosticsService;
@property (retain) HAPSupportedDiagnosticsSnapshot *currentSnapshot;
@property (readonly) NSString *transport;

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (id)attributeDescriptions;

@end
