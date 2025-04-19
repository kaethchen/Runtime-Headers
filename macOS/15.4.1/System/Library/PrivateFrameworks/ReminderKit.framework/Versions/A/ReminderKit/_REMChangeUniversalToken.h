@interface _REMChangeUniversalToken : REMChangeToken

+ (BOOL)supportsSecureCoding;
+ (id)universalToken;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (BOOL)isUniversal;

@end
