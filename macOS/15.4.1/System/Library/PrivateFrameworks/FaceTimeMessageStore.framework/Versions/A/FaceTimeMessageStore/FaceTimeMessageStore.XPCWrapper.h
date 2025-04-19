@interface FaceTimeMessageStore.XPCWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ data;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
