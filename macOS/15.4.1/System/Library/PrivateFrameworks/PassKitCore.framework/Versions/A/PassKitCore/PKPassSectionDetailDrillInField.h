@class NSArray, NSString;

@interface PKPassSectionDetailDrillInField : PKPassField

@property (retain, nonatomic) NSArray *sectionIdentifiers;
@property (nonatomic) long long authRequirement;
@property (retain, nonatomic) NSString *localizedTitle;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asDictionary;
- (BOOL)isDrillInField;

@end
