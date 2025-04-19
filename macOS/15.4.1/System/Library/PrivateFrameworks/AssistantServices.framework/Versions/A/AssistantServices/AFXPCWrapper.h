@class NSObject;
@protocol OS_xpc_object;

@interface AFXPCWrapper : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_xpcObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)xpcObject;

@end
