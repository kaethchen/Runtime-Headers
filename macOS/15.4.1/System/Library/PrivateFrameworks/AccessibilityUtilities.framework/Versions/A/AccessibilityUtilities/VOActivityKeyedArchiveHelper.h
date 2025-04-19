@interface VOActivityKeyedArchiveHelper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ hashableValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
