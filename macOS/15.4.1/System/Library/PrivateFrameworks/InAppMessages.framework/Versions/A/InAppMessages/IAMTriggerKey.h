@class NSString;

@interface IAMTriggerKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *nameSpacedKeyName;

+ (id)nameSpacedKeyNameForName:(id)a0 bundleIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 bundleIdentifier:(id)a1;

@end
