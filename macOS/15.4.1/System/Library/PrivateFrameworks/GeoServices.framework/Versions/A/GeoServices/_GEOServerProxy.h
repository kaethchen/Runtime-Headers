@class GEOServer;

@interface _GEOServerProxy : NSObject

@property (readonly, nonatomic) Class serverClass;
@property (readonly, nonatomic) GEOServer *server;

+ (id)proxyForClass:(Class)a0;
+ (id)proxyForServer:(id)a0 daemon:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_setServer:(id)a0;
- (BOOL)isEqualToServerProxy:(id)a0;
- (void)startServerWithDaemon:(id)a0;

@end
