@class NSArray, NSString;

@interface CNCDGroupsWithIdentifiersPredicate : CNPredicate <CNCDGroupPredicate>

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionOfIdentifiers:(id)a0;

@end
