@class NSString;

@interface CNLDAPPredicateRemapping : NSObject <CNLDAPPredicateRemapping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)predicateForLeft:(id)a0 endsWithRight:(id)a1;
- (id)predicateForLeft:(id)a0 lessThanRight:(id)a1;
- (id)or:(id)a0;
- (id)predicateForLeft:(id)a0 containsRight:(id)a1;
- (id)and:(id)a0;
- (id)not:(id)a0;
- (id)predicateForLeft:(id)a0 beginsWithRight:(id)a1;
- (id)predicateForLeft:(id)a0 betweenLowerBound:(id)a1 upperBound:(id)a2;
- (id)predicateForLeft:(id)a0 equalToRight:(id)a1;
- (id)predicateForLeft:(id)a0 greaterThanOrEqualToRight:(id)a1;
- (id)predicateForLeft:(id)a0 greaterThanRight:(id)a1;
- (id)predicateForLeft:(id)a0 inRight:(id)a1;
- (id)predicateForLeft:(id)a0 lessThanOrEqualToRight:(id)a1;
- (id)predicateForLeft:(id)a0 likeRight:(id)a1;
- (id)predicateForLeft:(id)a0 notEqualToRight:(id)a1;

@end
