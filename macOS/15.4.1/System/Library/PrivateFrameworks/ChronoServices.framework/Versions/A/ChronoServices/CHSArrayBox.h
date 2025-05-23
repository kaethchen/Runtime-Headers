@class NSArray;

@interface CHSArrayBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *value;

+ (id)boxedValue:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0;

@end
