@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>

@property (nonatomic) unsigned long long savedHash;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSArray *arguments;

+ (id)requestIdentifierForInvocation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInvocation:(id)a0;
- (id)_argumentsForInvocation:(id)a0;

@end
