@class NSData;

@interface PKUnifiedAccessHomeAuxiliaryCapabilityDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *readerGroupIdentifier;
@property (readonly, copy, nonatomic) NSData *readerGroupPublicKey;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReaderGroupIdentifier:(id)a0 readerGroupPublicKey:(id)a1;

@end
