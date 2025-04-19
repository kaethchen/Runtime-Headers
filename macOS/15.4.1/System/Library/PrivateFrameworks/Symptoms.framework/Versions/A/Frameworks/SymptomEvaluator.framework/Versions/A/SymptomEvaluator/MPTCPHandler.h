@class NSString;

@interface MPTCPHandler : NSObject <ConfigurableObjectProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
