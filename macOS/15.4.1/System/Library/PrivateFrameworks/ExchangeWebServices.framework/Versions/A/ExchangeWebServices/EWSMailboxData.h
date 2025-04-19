@class NSString, EWSEmailAddress;

@interface EWSMailboxData : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSEmailAddress *Email;
@property (nonatomic) long long AttendeeType;
@property (nonatomic) BOOL ExcludeConflicts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
