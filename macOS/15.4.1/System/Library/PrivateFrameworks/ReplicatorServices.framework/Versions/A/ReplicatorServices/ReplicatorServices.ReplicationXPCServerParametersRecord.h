@class NSString;

@interface ReplicatorServices.ReplicationXPCServerParametersRecord : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ values;
    void /* unknown type, empty encoding */ expiration;
    void /* unknown type, empty encoding */ options;
}

@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;

@end
