@class NSError, NSURL, NSData;

@interface SFLBookmark : NSObject <NSCopying> {
    NSURL *_url;
    unsigned long long _state;
    NSError *_error;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long state;
@property (copy) id /* block */ synchronousResolver;
@property (copy) id /* block */ asynchronousResolver;
@property (readonly) NSError *error;
@property (readonly) NSURL *url;
@property (readonly) NSData *data;
@property (readonly, getter=isStale) BOOL stale;
@property (readonly, getter=isResolved) BOOL resolved;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)initWithURL:(id)a0;
- (unsigned long long)state;
- (id)url;
- (id)_init;
- (BOOL)resolve;
- (id)resourcePropertyForKey:(id)a0;
- (id)initWithBookmarkData:(id)a0;
- (id)initWithURL:(id)a0 bookmarkData:(id)a1;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 includingResourceValuesForKeys:(id)a2 relativeToURL:(id)a3;
- (BOOL)isEqual:(id)a0 requiredMatchResult:(long long)a1;
- (void)resolveWithCompletion:(id /* block */)a0;
- (BOOL)resolveWithOptions:(unsigned long long)a0;
- (void)resolveWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)resolveWithOptions:(unsigned long long)a0 relativeToURL:(id)a1;
- (void)resolveWithOptions:(unsigned long long)a0 relativeToURL:(id)a1 completion:(id /* block */)a2;
- (BOOL)resolveWithOptions:(unsigned long long)a0 relativeToURL:(id)a1 error:(id *)a2;
- (void)updateWithResolveResult:(id)a0;

@end
