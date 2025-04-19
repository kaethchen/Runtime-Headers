@class IMHandle, NSString, NSArray, CNContact, NSMutableArray;

@interface IMMe : NSObject

@property (retain, nonatomic) CNContact *cnContact;
@property (retain, nonatomic) NSString *cnNickname;
@property (retain, nonatomic) NSString *cnFirstName;
@property (retain, nonatomic) NSString *cnFullName;
@property (retain, nonatomic) NSString *cnLastName;
@property (retain, nonatomic) NSArray *cnEmails;
@property (retain, nonatomic) NSMutableArray *cnIMHandles;
@property (retain, nonatomic) NSMutableArray *loginIMHandles;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (readonly, nonatomic) NSArray *imHandles;

+ (id)me;
+ (id)fallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)imHandleForService:(id)a0;
+ (id)lastNameFromFallbackUserName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeIMHandle:(id)a0;
- (id)_imHandlesWithIDs:(id)a0 onAccount:(id)a1;
- (BOOL)addIMHandle:(id)a0;
- (BOOL)addLoginIMHandle:(id)a0;
- (BOOL)isIMHandleLoginIMHandle:(id)a0;
- (void)myPictureChanged;
- (void)rebuildIMHandles;
- (BOOL)removeLoginIMHandle:(id)a0;
- (void)resetABPerson;
- (void)setCNContact:(id)a0;

@end
