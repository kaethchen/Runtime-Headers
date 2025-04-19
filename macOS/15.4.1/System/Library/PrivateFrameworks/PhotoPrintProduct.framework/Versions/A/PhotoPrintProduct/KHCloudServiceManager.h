@class NSString, NSURL, PPSManager;

@interface KHCloudServiceManager : NSObject

@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSString *zone;
@property (readonly, nonatomic) NSURL *ppsManagerIdentifier;
@property (readonly, nonatomic) BOOL cloudKitIsAvailable;
@property (readonly, nonatomic) PPSManager *ppsManager;

+ (id)_ppsManagersByIdentifier;
+ (id)cloudServiceManagersByIdentifier;

- (void).cxx_destruct;
- (void)die;
- (id)initWithPPSManager:(id)a0;

@end
