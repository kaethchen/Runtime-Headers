@class NSData;

@interface Sage.DocumentRegistrationXPCResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _registration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_registration;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
