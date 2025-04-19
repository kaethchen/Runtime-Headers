@class NSArray, NSDate;

@interface _SFContextualNamedEntitySource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sourceApplications;
@property (readonly, copy, nonatomic) NSDate *fromDate;
@property (readonly, copy, nonatomic) NSDate *toDate;
@property (readonly, nonatomic) long long limit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceApplications:(id)a0 fromDate:(id)a1 toDate:(id)a2 limit:(long long)a3;

@end
