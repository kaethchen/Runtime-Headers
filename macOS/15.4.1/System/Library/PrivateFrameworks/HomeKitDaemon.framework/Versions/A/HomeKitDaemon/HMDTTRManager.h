@class NSString;
@protocol HMMRadarRequestFilter;

@interface HMDTTRManager : NSObject <HMMRadarInitiating>

@property (class, nonatomic, readonly) id<HMMRadarRequestFilter> defaultFilter;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
