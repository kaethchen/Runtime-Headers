@class NSString, NSArray;

@interface ABAccountBackupOperation : NSOperation {
    NSString *_backupFilename;
}

@property (readonly) NSString *workingDirectory;
@property (readonly) NSArray *files;
@property (readonly) NSString *backupFilename;

+ (id)os_log;

- (void).cxx_destruct;
- (void)main;

@end
