@class NSURL, NSString;

@interface _NSSavePanelPrefixWatchingTagSetter : _NSSavePanelTagSetter {
    NSURL *directoryURL;
    NSString *prefix;
}

- (void)dealloc;
- (BOOL)_isRelevantURL:(id)a0;
- (id)_URLForDirectoryToWatch;
- (BOOL)_checkAndSetTagsForURL:(id)a0 usingAttributeCache:(BOOL)a1;
- (void)_enumerateURLsUsingBlock:(id /* block */)a0;
- (id)_initWithDirectoryURL:(id)a0 useSecurityScopedURL:(BOOL)a1 prefix:(id)a2 tagNames:(id)a3;

@end
