@class DMFBook;

@interface DMFInstallManagedBookResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFBook *book;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBook:(id)a0;

@end
