@class NSObject;
@protocol OS_xpc_object;

@interface GTReplayUpdateTermination : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *path;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
