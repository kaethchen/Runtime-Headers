@class ASDJobManifest, NSXPCConnection;

@interface ASDJobOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *endpoint;
@property (retain, nonatomic) ASDJobManifest *manifest;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
