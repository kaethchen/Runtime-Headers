@class NSString;

@interface CNCDContactWithNamePredicate : CNContactWithNamePredicate <CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameFieldsToCheck;
+ (id)patternSubjectForString:(id)a0 options:(unsigned long long)a1;
+ (id)predicateWithField:(id)a0 string:(id)a1 options:(unsigned long long)a2;
+ (id)predicateWithNameComponent:(id)a0 options:(unsigned long long)a1;
+ (id)sensitivityModifierForOptions:(unsigned long long)a0;

- (id)cn_coreDataPredicate;

@end
