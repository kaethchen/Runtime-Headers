@class NSString, CSIndexConnection;

@interface CSUnhousedSearchableIndex : CSSearchableIndex {
    NSString *_resolvedIndexPath;
}

@property BOOL attemptedIndexPathResolution;
@property (readonly, nonatomic) NSString *resolvedIndexPath;
@property (nonatomic) int resolvedIndexPathErrorCode;
@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) CSIndexConnection *savedConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)connection;
- (id)initWithPath:(id)a0;
- (id)addExtensionToken:(id)a0 indexPath:(const char *)a1 connection:(id)a2;
- (const char *)defaultIndexPath;
- (id)initWithName:(id)a0 protectionClass:(id)a1 path:(id)a2;
- (id)initWithPath:(id)a0 bundleId:(id)a1;
- (id)initialConnection;
- (id)xpc_dictionary_for_command:(const char *)a0 requiresInitialization:(BOOL)a1;

@end
