@class NSString;

@interface _EMBusinessExternalIDComponents : NSObject <NSCopying>

@property (copy, nonatomic) NSString *highLevelDomain;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *simpleAddress;
@property (copy, nonatomic) NSString *brandID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
