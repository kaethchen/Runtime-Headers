@class NSURL, NSArray;

@interface ExternalPurchaseLinkResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *single;
@property (readonly) NSArray *multi;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSingle:(id)a0 multi:(id)a1;

@end
