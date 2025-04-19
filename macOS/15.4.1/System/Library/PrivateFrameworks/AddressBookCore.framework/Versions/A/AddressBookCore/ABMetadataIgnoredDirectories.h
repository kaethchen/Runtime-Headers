@class NSCountedSet;

@interface ABMetadataIgnoredDirectories : NSObject {
    NSCountedSet *_ignoredDirectories;
}

- (id)init;
- (void).cxx_destruct;
- (void)addDirectory:(id)a0;
- (void)removeDirectory:(id)a0;
- (void)runWithIgnoredDirectory:(id)a0 block:(id /* block */)a1;
- (BOOL)shouldIngoreDirectory:(id)a0;

@end
