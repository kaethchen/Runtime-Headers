@class NSString;

@interface HMMUptimeProvider : NSObject <HMMUptimeProvider>

@property (class, readonly, nonatomic) HMMUptimeProvider *sharedInstance;

@property (readonly, nonatomic) double uptime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
