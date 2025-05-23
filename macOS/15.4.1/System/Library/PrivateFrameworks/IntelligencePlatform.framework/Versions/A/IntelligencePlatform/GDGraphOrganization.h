@class NSString, NSArray, GDGraphOrganizationEntityIdentifier;

@interface GDGraphOrganization : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphOrganizationEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *phoneticName;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allPhoneticName;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 phoneticNameField:(id)a2 allNameField:(id)a3 allPhoneticNameField:(id)a4;

@end
