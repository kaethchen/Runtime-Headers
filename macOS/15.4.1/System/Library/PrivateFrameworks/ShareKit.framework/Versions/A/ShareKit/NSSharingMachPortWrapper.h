@interface NSSharingMachPortWrapper : NSObject <NSSecureCoding> {
    unsigned int _port;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int port;

+ (id)wrapperForPort:(unsigned int)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
