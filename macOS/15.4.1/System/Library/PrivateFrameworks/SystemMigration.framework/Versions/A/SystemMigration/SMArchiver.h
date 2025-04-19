@class NSURL;

@interface SMArchiver : NSObject

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destinationPath;

- (void).cxx_destruct;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;
- (BOOL)archive;
- (BOOL)unarchive;

@end
