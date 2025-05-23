@class NSString;

@interface PFStoryConcreteStyle : NSObject <PFStoryRecipeStyle>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) long long customColorGradeKind;
@property (readonly, nonatomic) NSString *songAssetIdentifier;
@property (readonly, nonatomic) BOOL isCustomized;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToStyle:(id)a0;
- (id)initWithIdentifier:(id)a0 originalColorGradeCategory:(id)a1 customColorGradeKind:(long long)a2 songAssetIdentifier:(id)a3 isCustomized:(BOOL)a4;

@end
