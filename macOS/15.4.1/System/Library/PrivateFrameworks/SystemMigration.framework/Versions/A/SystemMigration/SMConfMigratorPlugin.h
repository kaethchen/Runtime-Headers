@class NSObject, SMMigrationRequest;
@protocol SMSystem_FileManagerProtocol;

@interface SMConfMigratorPlugin : NSObject

@property (weak) SMMigrationRequest *migrationRequest;
@property (weak) NSObject<SMSystem_FileManagerProtocol> *sourceFilesystem;
@property (weak) NSObject<SMSystem_FileManagerProtocol> *targetFilesystem;

- (void)run;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (double)estimateTime;

@end
