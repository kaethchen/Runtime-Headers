@class NSObject;
@protocol OS_xpc_object;

@interface XCTSerializedTransportWrapper2 : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSObject<OS_xpc_object> *serializedTransport;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedTransport:(id)a0;

@end
