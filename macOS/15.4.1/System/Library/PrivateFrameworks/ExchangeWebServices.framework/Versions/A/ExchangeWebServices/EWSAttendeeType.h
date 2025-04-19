@class NSString, EWSEmailAddressType, NSDateComponents;

@interface EWSAttendeeType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSEmailAddressType *Mailbox;
@property (nonatomic) long long ResponseType;
@property (retain, nonatomic) NSDateComponents *LastResponseTime;
@property (retain, nonatomic) NSDateComponents *ProposedStart;
@property (retain, nonatomic) NSDateComponents *ProposedEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
