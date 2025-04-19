@class NSString, NSArray, NSDictionary, ML3DatabaseDistantConnection;

@interface ML3DatabaseDistantResult : ML3DatabaseResult {
    NSArray *_cachedRows;
    NSDictionary *_cachedColumnNameIndexMap;
}

@property (readonly, nonatomic) ML3DatabaseDistantConnection *distantConnection;
@property (readonly, nonatomic) NSString *sql;
@property (readonly, nonatomic) NSArray *parameters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexForColumnName:(id)a0;
- (id)initWithStatement:(id)a0;
- (BOOL)_fetchRowsIfEmpty;
- (void)_localEnumerateRowsWithBlock:(id /* block */)a0;
- (void)_remoteEnumerateRowsWithBlock:(id /* block */)a0;
- (id)columnNameIndexMap;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (id)initWithDistantConnection:(id)a0 sql:(id)a1 parameters:(id)a2;

@end
