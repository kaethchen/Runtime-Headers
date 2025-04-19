@class NSString;

@interface MCDisplayNameInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *fullName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithShortName:(id)a0 fullName:(id)a1;

@end
