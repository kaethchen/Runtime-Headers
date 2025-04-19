@class NSDictionary;

@interface PHASERouteChangeInfoImpl : NSObject <PHASERouteChangeInfo> {
    NSDictionary *_description;
}

@property (readonly, nonatomic) NSDictionary *description;

- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;

@end
