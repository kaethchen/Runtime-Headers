@class NSDictionary;

@interface XCTCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) XCTCapabilities *emptyCapabilities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *capabilitiesDictionary;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasCapability:(id)a0;
- (unsigned long long)versionForCapability:(id)a0;

@end
