@class NSString, NSSet;

@interface KTStaticKeyPeer : NSObject <NSSecureCoding> {
    NSSet *_otherNames;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *peer;
@property (retain) NSSet *otherNamesForPeer;
@property (retain) NSString *lastUsedAddressOfMe;

+ (id)stripIMPrefix:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPeer:(id)a0;

@end
