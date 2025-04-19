@class NSArray, NSDictionary, NSPredicate, NSString, NSObject, CSSuggestion;
@protocol OS_os_log;

@interface EMQuery : NSObject <EFLoggable, EMQueryBuilder, NSSecureCoding, NSCopying>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) Class targetClass;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) long long limit;
@property (nonatomic) unsigned long long queryOptions;
@property (copy, nonatomic) NSDictionary *targetClassOptions;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addValidSortDescriptorKeyPaths:(id)a0 forTargetClass:(Class)a1;
+ (BOOL)_isValidSortDescriptor:(id)a0 forTargetClass:(Class)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)queryWithPredicate:(id)a0;
- (id)queryWithTargetClass:(Class)a0 predicate:(id)a1;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 queryOptions:(unsigned long long)a4 targetClassOptions:(id)a5 label:(id)a6;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 queryOptions:(unsigned long long)a3 label:(id)a4;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 suggestion:(id)a3 limit:(long long)a4 queryOptions:(unsigned long long)a5 targetClassOptions:(id)a6 label:(id)a7;
- (BOOL)_isEqualToQuery:(id)a0;
- (void)addTargetClassOptions:(id)a0;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 builder:(id /* block */)a3;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 queryOptions:(unsigned long long)a3 targetClassOptions:(id)a4 label:(id)a5;

@end
