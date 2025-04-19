@class NSArray, NSDictionary;
@protocol NSFastEnumeration;

@interface CADPredicate : NSPredicate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly, nonatomic) NSDictionary *relatedObjectPropertiesToLoad;
@property (readonly, nonatomic) id<NSFastEnumeration> databasesToQuery;

+ (void)setValidator:(Class)a0;
+ (id)conciseCalendarList:(id)a0;

- (BOOL)evaluateWithObject:(id)a0;
- (void)beginSignpostWithHandle:(id)a0 signpostID:(unsigned long long)a1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { } *)a0;

@end
