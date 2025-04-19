@class NSMutableDictionary, NSSet, NSMutableSet, NSMutableOrderedSet, NSString;

@interface _NSCollectionLayoutSupplementaryRegistrar : NSObject <_NSCollectionLayoutSupplementaryEnrolling>

@property (retain, nonatomic) NSMutableOrderedSet *enrollmentIdentifiers;
@property (retain, nonatomic) NSMutableSet *uncommittedEnrollmentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *enrollmentsDict;
@property (retain, nonatomic) NSMutableDictionary *kindEnrollmentsDict;
@property (readonly, nonatomic) NSSet *kinds;
@property (readonly, nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_addEnrollmentToKindDict:(id)a0;
- (void)_removeEnrollmentWithIdentifier:(id)a0;
- (void)commitEnrollment:(id)a0;
- (long long)countForKind:(id)a0;
- (id)enrollSupplementaryForKind:(id)a0;
- (long long)kindIndexForEnrollmentIdentifier:(id)a0;
- (void)pruneUncommitedEnrollments;
- (void)unenrollAllAfterAndIncludingEnrollment:(id)a0;
- (void)unenrollAllAfterEnrollment:(id)a0;

@end
