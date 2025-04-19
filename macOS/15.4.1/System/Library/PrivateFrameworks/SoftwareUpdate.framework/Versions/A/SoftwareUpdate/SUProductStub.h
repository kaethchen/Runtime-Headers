@class NSString;

@interface SUProductStub : NSObject

@property (retain) NSString *productKey;
@property (retain) NSString *displayName;
@property (retain) NSString *displayVersion;

- (void)dealloc;
- (id)init;
- (id)toProduct;

@end
