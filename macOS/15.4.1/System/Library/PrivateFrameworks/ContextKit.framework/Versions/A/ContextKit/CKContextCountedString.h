@class NSString;

@interface CKContextCountedString : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *string;
@property (nonatomic) unsigned long long count;

+ (id)string:(id)a0 withCount:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
