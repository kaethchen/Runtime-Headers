@class NSArray;

@interface SCMLPeopleDetectionSpan : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL isGeneric;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasGender;
@property (nonatomic) BOOL hasEthnicity;
@property (nonatomic) BOOL hasImplicitCategoryRequiringPersonalization;
@property (retain, nonatomic) NSArray *ageSpans;
@property (retain, nonatomic) NSArray *genderSpans;
@property (retain, nonatomic) NSArray *ethnicitySpans;

- (id)init;
- (void).cxx_destruct;

@end
