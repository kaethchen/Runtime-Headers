@class NSArray, NSString, NSDictionary, NSNumber;

@interface HPDQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *scope;
@property (readonly) NSString *queryString;
@property (retain) NSArray *resultTypes;
@property (retain) NSArray *preferredLanguages;
@property (retain) NSDictionary *userInfo;
@property (retain) NSString *queryID;
@property (retain) NSNumber *pid;
@property BOOL cancelled;
@property (retain) NSDictionary *options;
@property unsigned long long limit;

+ (id)queryWithScope:(id)a0 andString:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithScope:(id)a0 string:(id)a1 preferredLanguages:(id)a2;

@end
