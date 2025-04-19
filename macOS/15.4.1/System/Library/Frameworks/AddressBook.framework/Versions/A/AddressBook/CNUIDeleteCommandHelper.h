@class CNContactStore, NSObject;
@protocol OS_os_log;

@interface CNUIDeleteCommandHelper : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_os_log> *log_t;

+ (id)deleteCommandsForContacts:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)containerIdentifiersForContacts:(id)a0;

@end
