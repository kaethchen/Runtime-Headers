@class NSString, CSSearchConnection;

@interface CSUnhousedSearchQuery : CSSearchQuery {
    NSString *_resolvedIndexPath;
}

@property (retain, nonatomic) NSString *indexPath;
@property (readonly, nonatomic) NSString *resolvedIndexPath;
@property (retain, nonatomic) CSSearchConnection *savedConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)start;
- (id)debugDescriptionWithQueryString:(BOOL)a0;
- (id)initWithPath:(id)a0 queryString:(id)a1 attributers:(id)a2;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2 attributes:(id)a3;
- (id)initialConnection;

@end
