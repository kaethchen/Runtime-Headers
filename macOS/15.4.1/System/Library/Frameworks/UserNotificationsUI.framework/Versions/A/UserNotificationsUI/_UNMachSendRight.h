@interface _UNMachSendRight : NSObject <NSSecureCoding> {
    unsigned int _sendRight;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapSendRight:(unsigned int)a0 transferOwnership:(BOOL)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (unsigned int)sendRight;
- (unsigned long long)portRefs;

@end
