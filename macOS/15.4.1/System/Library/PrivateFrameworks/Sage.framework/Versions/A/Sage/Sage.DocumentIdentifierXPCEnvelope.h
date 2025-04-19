@class NSData;

@interface Sage.DocumentIdentifierXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _document;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_document;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
