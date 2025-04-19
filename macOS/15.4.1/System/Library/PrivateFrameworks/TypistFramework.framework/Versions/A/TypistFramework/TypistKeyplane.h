@class NSString;

@interface TypistKeyplane : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isLetters;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic) BOOL isShiftKeyplane;
@property (nonatomic) BOOL usesAutoShift;
@property (nonatomic) BOOL ignoresShiftState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
