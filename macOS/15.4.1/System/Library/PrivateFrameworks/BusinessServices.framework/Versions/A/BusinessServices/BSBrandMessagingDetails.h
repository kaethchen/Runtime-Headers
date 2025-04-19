@class NSString, BSBrandMessagingDetailsObjcShim;

@interface BSBrandMessagingDetails : NSObject

@property (readonly, retain, nonatomic) BSBrandMessagingDetailsObjcShim *shim;
@property (readonly, nonatomic) NSString *localizedResponseTime;

- (void).cxx_destruct;
- (id)_initWithShim:(id)a0;

@end
