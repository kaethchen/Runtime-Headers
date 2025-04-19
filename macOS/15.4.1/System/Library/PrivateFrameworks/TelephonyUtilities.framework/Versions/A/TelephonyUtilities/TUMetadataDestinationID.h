@class NSString, TUHandle;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;

+ (id)metadataDestinationIDForCall:(id)a0;
+ (id)metadataDestinationIDsForCHRecentCall:(id)a0;
+ (id)metadataDestinationIDsForCHRecentCalls:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0;
- (BOOL)isEqualToMetadataDestinationID:(id)a0;
- (id)initWithDestinationID:(id)a0 isoCountryCode:(id)a1;

@end
