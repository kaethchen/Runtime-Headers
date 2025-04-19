@class NSString;

@interface FMLHandle : NSObject

@property (copy) NSString *identifier;

+ (id)handleWithIdentifier:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)comparisonIdentifier;

@end
