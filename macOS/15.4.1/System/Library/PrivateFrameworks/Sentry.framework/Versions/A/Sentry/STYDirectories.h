@class NSURL;

@interface STYDirectories : NSObject

@property (class, readonly) NSURL *incomingDirectory;
@property (class, readonly) NSURL *sysdiagnoseDirectory;
@property (class, readonly) NSURL *pendingDirectory;
@property (class, readonly) NSURL *inFlightDirectory;

+ (id)temporaryDirectory;
+ (BOOL)ensureDirectoryExists:(id)a0 availableForAll:(BOOL)a1 error:(id *)a2;
+ (BOOL)ensureDirectoryExists:(id)a0 error:(id *)a1;

@end
