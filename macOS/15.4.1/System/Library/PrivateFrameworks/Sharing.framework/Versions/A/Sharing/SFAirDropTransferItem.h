@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *subtype;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL isFile;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)incrementCount;
- (id)initWithType:(id)a0 isFile:(BOOL)a1;
- (id)initWithType:(id)a0 subtype:(id)a1 isFile:(BOOL)a2;

@end
