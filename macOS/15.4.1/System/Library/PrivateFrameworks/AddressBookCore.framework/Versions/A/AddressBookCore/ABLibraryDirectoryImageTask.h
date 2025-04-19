@class NSArray;

@interface ABLibraryDirectoryImageTask : CNTask {
    NSArray *_emailAddresses;
}

+ (void)_cacheAvailableLibraryImagesPeopleFolders;

- (void)dealloc;
- (id)run:(id *)a0;
- (id)initWithEmailAddresses:(id)a0;

@end
