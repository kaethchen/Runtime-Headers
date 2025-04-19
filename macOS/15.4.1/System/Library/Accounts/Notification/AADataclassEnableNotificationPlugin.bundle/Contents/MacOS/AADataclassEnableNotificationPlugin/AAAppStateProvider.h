@class NSString;

@interface AAAppStateProvider : NSObject <AppStateProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appStateForBundleID:(id)a0;


@end
