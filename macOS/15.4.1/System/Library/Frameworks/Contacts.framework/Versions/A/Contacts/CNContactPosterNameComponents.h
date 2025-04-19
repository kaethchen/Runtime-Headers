@class NSString;

@interface CNContactPosterNameComponents : NSObject

@property (copy) NSString *firstNameComponent;
@property (copy) NSString *secondNameComponent;
@property long long emphasizedNameComponentIndex;
@property long long singleNameComponentIndex;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end
