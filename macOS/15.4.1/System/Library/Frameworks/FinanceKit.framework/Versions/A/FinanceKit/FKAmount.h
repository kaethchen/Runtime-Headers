@class NSDecimalNumber, NSString;

@interface FKAmount : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDecimalNumber *decimal;
@property (readonly, copy, nonatomic) NSString *currency;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDecimalNumber:(id)a0 currency:(id)a1;

@end
