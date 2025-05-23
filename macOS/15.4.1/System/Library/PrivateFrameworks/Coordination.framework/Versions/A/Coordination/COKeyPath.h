@class NSString, NSArray;

@interface COKeyPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *absoluteString;
@property (copy, nonatomic) NSArray *components;

+ (id)allowedCharacterSet;
+ (id)createWithString:(id)a0;
+ (id)predicateWithComponents:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;

@end
