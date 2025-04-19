@class NSNumber, NSString, NSPredicate;

@interface CNCDContactsMatchingPredicate : CNPredicate <CNCDContactPredicate> {
    NSPredicate *_predicate;
}

@property (readonly) NSNumber *limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForContactsWithFormat:(id)a0;
+ (id)predicateForContactMatchingInstantMessageAddress:(id)a0;
+ (id)predicateForContactMatcingURLString:(id)a0;
+ (id)predicateForContactWithLegacyIdentifier:(unsigned int)a0;
+ (id)predicateForContactsMatchingMapsDataString:(id)a0;
+ (id)predicateForContactsWithOrganizationName:(id)a0;

- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)initWithCoreDataPredicate:(id)a0;
- (id)initWithCoreDataPredicate:(id)a0 limit:(id)a1;

@end
