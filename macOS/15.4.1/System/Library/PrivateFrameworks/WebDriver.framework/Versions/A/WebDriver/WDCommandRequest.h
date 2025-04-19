@class NSString, RouteRequest, RouteResponse;

@interface WDCommandRequest : NSObject

@property (readonly, nonatomic) RouteRequest *request;
@property (readonly, nonatomic) RouteResponse *response;
@property (readonly, nonatomic) long long method;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL wasCancelled;
@property (readonly, nonatomic) SEL selector;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequest:(id)a0 response:(id)a1 selector:(SEL)a2 method:(long long)a3 path:(id)a4;

@end
