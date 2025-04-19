@class NSString, TSCEValue;

@interface TSCERemoteDataSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long hashVal;
@property (readonly, nonatomic) unsigned short functionIndex;
@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) long long attribute;
@property (readonly, nonatomic) long long year;
@property (readonly, nonatomic) long long month;
@property (readonly, nonatomic) long long day;
@property (readonly, nonatomic) BOOL isCold;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) TSCEValue *invalidAttributeErrorValue;
@property (readonly, nonatomic) TSCEValue *invalidSymbolErrorValue;

+ (id)specifierFromArchive:(const void *)a0;
+ (id)specifierWithFunctionIndex:(unsigned short)a0 symbol:(id)a1 attribute:(long long)a2;
+ (id)specifierWithFunctionIndex:(unsigned short)a0 symbol:(id)a1 attribute:(long long)a2 year:(long long)a3 month:(long long)a4 day:(long long)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0;
- (id)specifierByChangingAttributeTo:(long long)a0;
- (BOOL)hasDateEqualToDate:(id)a0;
- (id)initWithFunctionIndex:(unsigned short)a0 symbol:(id)a1 attribute:(long long)a2 year:(long long)a3 month:(long long)a4 day:(long long)a5;
- (double)p_timeInterval;

@end
