@class NSString;

@interface LACSetUpStateProvider : NSObject <LACSetUpStateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hasCompletedSetup;

@end
