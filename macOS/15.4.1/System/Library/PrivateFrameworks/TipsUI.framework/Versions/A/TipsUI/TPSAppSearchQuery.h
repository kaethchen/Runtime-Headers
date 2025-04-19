@class NSString, TPSSearchResult, NSError;

@interface TPSAppSearchQuery : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _searchTerm;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) void /* unknown type, empty encoding */ origin;

+ (id)queryWithSearchTerm:(id)a0 origin:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(void (^)(TPSSearchResult *, TPSSearchResult *, NSError *))a0;
- (id)initWithSearchTerm:(id)a0 origin:(long long)a1 identifier:(id)a2;

@end
