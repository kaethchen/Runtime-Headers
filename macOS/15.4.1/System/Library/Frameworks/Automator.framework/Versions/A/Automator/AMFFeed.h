@class NSURL, AMFFeedMetadata, NSArray;

@interface AMFFeed : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *url;
@property (retain) AMFFeedMetadata *metadata;
@property (copy) NSArray *entries;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 metadata:(id)a1;

@end
