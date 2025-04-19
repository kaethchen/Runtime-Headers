@class NSString;

@interface CNCountryInformation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *phoneticName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithISOCountryCode:(id)a0 name:(id)a1 phoneticName:(id)a2;

@end
