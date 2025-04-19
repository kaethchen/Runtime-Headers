@class NSString, NSArray;

@interface PKPassDetailSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSString *insertAfterSection;
@property (retain, nonatomic) NSArray *rows;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRows:(id)a0;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0 allowedRows:(id)a1 bundle:(id)a2 privateBundle:(id)a3;

@end
