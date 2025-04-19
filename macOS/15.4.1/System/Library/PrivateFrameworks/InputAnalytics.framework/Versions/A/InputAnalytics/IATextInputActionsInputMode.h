@class NSString;

@interface IATextInputActionsInputMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *inputModeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)inputModeUniqueString;
- (id)initWithLanguage:(id)a0 region:(id)a1 keyboardVariant:(id)a2 keyboardLayout:(id)a3 keyboardType:(id)a4 inputModeIdentifier:(id)a5;

@end
