@interface CHSReplicatedDescriptorsBox : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ descriptors;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
