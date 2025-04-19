@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (void)dealloc;
- (void).cxx_destruct;
- (id)connection;
- (long long)routeType;
- (id)routeUID;
- (id)initWithTelevision:(void *)a0;
- (long long)routeSubtype;

@end
