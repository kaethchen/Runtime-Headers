@class NSError, NSString, NSFileManager;

@interface PLFilesystemIterator : NSObject {
    NSString *_path;
    NSFileManager *_fileManager;
}

@property (readonly, copy) NSError *error;
@property BOOL continueAfterError;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (void)visitURLsLoadingPropertiesForKeys:(id)a0 withBlock:(id /* block */)a1;

@end
