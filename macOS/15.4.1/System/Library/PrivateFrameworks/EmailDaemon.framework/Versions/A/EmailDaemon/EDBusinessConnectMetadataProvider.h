@class NSString, BCSBusinessQueryService;

@interface EDBusinessConnectMetadataProvider : NSObject <EDBusinessMetadataProvider>

@property (retain, nonatomic) BCSBusinessQueryService *businessQueryService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
