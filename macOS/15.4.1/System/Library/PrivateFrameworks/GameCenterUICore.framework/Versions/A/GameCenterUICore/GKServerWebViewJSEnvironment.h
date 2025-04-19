@class NSString;

@interface GKServerWebViewJSEnvironment : NSObject

@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSString *device;
@property (readonly, nonatomic) int osMajorVersion;
@property (readonly, nonatomic) int osMinorVersion;
@property (readonly, nonatomic) int osRevision;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *dateFieldsOrder;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;

- (id)attributeKeys;

@end
