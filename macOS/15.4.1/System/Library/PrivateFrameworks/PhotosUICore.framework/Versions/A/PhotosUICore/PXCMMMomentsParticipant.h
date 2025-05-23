@class NSString, PHPerson;

@interface PXCMMMomentsParticipant : PXRecipient {
    NSString *_additionalLocalizedName;
}

@property (readonly, nonatomic) PHPerson *person;

- (void).cxx_destruct;
- (id)localizedName;
- (id)initWithPerson:(id)a0;
- (id)initWithEmailAddress:(id)a0 phoneNumber:(id)a1 localizedName:(id)a2;

@end
