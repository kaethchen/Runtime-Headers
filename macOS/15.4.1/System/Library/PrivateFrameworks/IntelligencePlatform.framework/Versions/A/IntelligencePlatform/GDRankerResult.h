@class GDSpan, NSString, NSArray;

@interface GDRankerResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDSpan *span;
@property (readonly, copy, nonatomic) NSString *entityClass;
@property (readonly, copy, nonatomic) NSArray *rankedItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRankedEntities:(id)a0;
- (id)initWithSpan:(id)a0 rankedEntities:(id)a1 entityClass:(id)a2;

@end
