@class NSString, ABCNMutableContact;

@interface ABCNContactDirectoryResultBuilder : NSObject <ABCNDirectoryResultBuilder> {
    ABCNMutableContact *_contact;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builder;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setTitle:(id)a0;
- (void)setMiddleName:(id)a0;
- (void)setNickname:(id)a0;
- (id)build;
- (void)setImageData:(id)a0;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (void)setOrganization:(id)a0;
- (void)setBirthdayComponents:(id)a0;
- (void)addEmailAddress:(id)a0 withLabel:(id)a1;
- (void)addInstantMessageUsername:(id)a0 service:(id)a1 label:(id)a2;
- (void)addPhoneNumber:(id)a0 withLabel:(id)a1;
- (void)addPostalAddress:(id)a0 withLabel:(id)a1;
- (void)addValue:(id)a0 withLabel:(id)a1 toPropertyWithKey:(id)a2;

@end
