@class NSArray;

@interface SensitiveContentAnalysisML.SCMLPersonAttributes : NSObject {
    void /* unknown type, empty encoding */ age;
    void /* unknown type, empty encoding */ gender;
    void /* unknown type, empty encoding */ ethnicity;
}

@property (nonatomic) void /* unknown type, empty encoding */ specific;
@property (nonatomic) void /* unknown type, empty encoding */ isGroup;
@property (nonatomic) void /* unknown type, empty encoding */ hasAge;
@property (nonatomic) void /* unknown type, empty encoding */ hasGender;
@property (nonatomic) void /* unknown type, empty encoding */ hasEthnicity;
@property (nonatomic, copy) NSArray *age;
@property (nonatomic, copy) NSArray *gender;
@property (nonatomic, copy) NSArray *ethnicity;
@property (nonatomic) void /* unknown type, empty encoding */ hasImplicitCategoryRequiringPersonalization;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
