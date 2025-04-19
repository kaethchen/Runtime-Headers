@class NSString;

@interface EWSCompleteNameType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Title;
@property (copy, nonatomic) NSString *FirstName;
@property (copy, nonatomic) NSString *MiddleName;
@property (copy, nonatomic) NSString *LastName;
@property (copy, nonatomic) NSString *Suffix;
@property (copy, nonatomic) NSString *Initials;
@property (copy, nonatomic) NSString *Nickname;
@property (copy, nonatomic) NSString *FullName;
@property (copy, nonatomic) NSString *YomiFirstName;
@property (copy, nonatomic) NSString *YomiLastName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
