@class NSString;

@interface XARDirectoryEnumerator : NSDirectoryEnumerator {
    struct __xar_t { } *_xar;
    struct __xar_iter_t { } *_xar_iter;
    struct __xar_file_t { } *_current_xar_file;
    BOOL _didPeek;
    BOOL _isDone;
    NSString *_basePath;
}

- (void)dealloc;
- (id)nextObject;
- (BOOL)isDirectory;
- (void)skipDescendants;
- (void)skipDescendents;
- (BOOL)_seekToSubpath:(id)a0;
- (struct __xar_file_t { } *)_next_file;
- (id)initWithXAR:(struct __xar_t { } *)a0 subpath:(id)a1;
- (struct __xar_file_t { } *)xar_file;

@end
