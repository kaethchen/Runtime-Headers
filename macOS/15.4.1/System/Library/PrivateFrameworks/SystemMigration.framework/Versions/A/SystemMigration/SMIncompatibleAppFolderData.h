@class NSURL, NSArray;

@interface SMIncompatibleAppFolderData : NSObject

@property (retain) NSURL *filePath;
@property (retain) NSArray *appFolderData;

+ (id)localizedStringForKey:(id)a0;
+ (id)appFolderDataFilePathWithIncompatibleAppFolder:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (BOOL)flushToDisk;
- (id)initWithFolderPath:(id)a0;
- (BOOL)removeDataFile;

@end
