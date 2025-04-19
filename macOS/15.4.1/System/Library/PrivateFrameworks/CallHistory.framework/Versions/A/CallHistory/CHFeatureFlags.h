@class NSString;

@interface CHFeatureFlags : NSObject <CHFeatureFlags>

@property (readonly, nonatomic) BOOL keepCallsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
