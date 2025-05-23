@class NSArray;

@interface AVTArchiverBasedStoreRoot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *domains;
@property (readonly, copy, nonatomic) NSArray *records;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomains:(id)a0 records:(id)a1;

@end
