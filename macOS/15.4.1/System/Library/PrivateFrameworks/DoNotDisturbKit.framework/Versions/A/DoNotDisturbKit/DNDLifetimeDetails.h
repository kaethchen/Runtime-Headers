@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *metadata;

+ (id)lifetimeDetailsForEvent:(id)a0 relativeToDate:(id)a1;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsForPlaceInference:(id)a0;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsUntilMorning;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 metadata:(id)a2;

@end
