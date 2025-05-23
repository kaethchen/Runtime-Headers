@class NSString, NSDictionary;

@interface VFXProgramSemanticInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *semantic;
@property (retain, nonatomic) NSDictionary *options;

+ (id)infoWithSemantic:(id)a0 options:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
