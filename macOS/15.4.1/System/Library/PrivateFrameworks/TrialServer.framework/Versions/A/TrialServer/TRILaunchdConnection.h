@class NSString;

@interface TRILaunchdConnection : NSObject <TRILaunchdInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_logErrorReply:(id)a0;
- (BOOL)requestReloadLowLevelFactors;

@end
