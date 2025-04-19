@interface MOContextFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long contextFormat;
@property (nonatomic) unsigned long long contextRetrieval;
@property (nonatomic) unsigned long long contextCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContextFormat:(unsigned long long)a0 contextRetrieval:(unsigned long long)a1 contextCount:(unsigned long long)a2;

@end
