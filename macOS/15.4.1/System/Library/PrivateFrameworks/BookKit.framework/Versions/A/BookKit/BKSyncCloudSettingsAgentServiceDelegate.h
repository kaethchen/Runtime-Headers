@class NSString;

@interface BKSyncCloudSettingsAgentServiceDelegate : NSObject <BKAgentServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bookLibraryDidAttemptSave:(BOOL)a0 error:(id)a1;
- (void)bookLibraryUpdated:(id)a0;
- (void)bookMetadata:(id)a0 changed:(long long)a1;

@end
