@class NSString;

@interface TMSystemMigrationPathsProvider : NSObject <TMSystemPathsProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)systemPathsForVolumeAtURL:(id)a0;

@end
