@class NSObject;
@protocol OS_xpc_object;

@interface CSSearchClientConnectionKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;

+ (id)keyWithConnection:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
