@class NSString, ABCNGroupIdentifier;

@interface ABCNGroup : NSObject <NSCopying, NSMutableCopying> {
    ABCNGroup *_snapshot;
}

@property (readonly, copy, nonatomic) ABCNGroup *snapshot;
@property (readonly, copy, nonatomic) ABCNGroupIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForIdentifiers:(id)a0;
+ (id)predicateForNamePrefix:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
