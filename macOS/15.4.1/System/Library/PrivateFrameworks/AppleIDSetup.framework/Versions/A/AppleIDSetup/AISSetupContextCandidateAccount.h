@class NSString, NSPersonNameComponents;

@interface AISSetupContextCandidateAccount : NSObject

@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *formattedShortName;

+ (id)_defaultShortNameFormatter;
+ (id)_stringFromPersonNameComponents:(id)a0 personNameComponentsFormatter:(id)a1;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 username:(id)a1 nameComponents:(id)a2;

@end
