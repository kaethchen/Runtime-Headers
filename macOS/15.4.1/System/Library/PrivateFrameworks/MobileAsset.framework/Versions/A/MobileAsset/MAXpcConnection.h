@class NSString, NSObject;
@protocol OS_xpc_object;

@interface MAXpcConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSString *connectionId;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (BOOL)notValid;

@end
