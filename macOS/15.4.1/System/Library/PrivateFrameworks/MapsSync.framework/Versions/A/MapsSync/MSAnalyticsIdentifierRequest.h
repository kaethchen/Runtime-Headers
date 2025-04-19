@class NSArray, NSError, _TtC8MapsSync20MapsSyncQueryOptions;

@interface MSAnalyticsIdentifierRequest : NSObject {
    void /* unknown type, empty encoding */ _request;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)fetchWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)countWithCompletionHandler:(void (^)(long long, NSError *))a0;
- (void)countWithOptions:(_TtC8MapsSync20MapsSyncQueryOptions *)a0 completionHandler:(void (^)(long long, NSError *))a1;
- (id)fetchSyncAndReturnError:(id *)a0;
- (id)fetchSyncWithOptions:(id)a0 error:(id *)a1;

@end
