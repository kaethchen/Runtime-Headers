@class NSString, NSArray, SCUIReportVictim, NSDate;

@interface SCUIReportEvidence : NSObject

@property (readonly) long long reportingApplication;
@property (readonly, copy) NSDate *reportCreationDate;
@property (readonly, copy) NSString *localeIdentifier;
@property (readonly, copy) SCUIReportVictim *victim;
@property (readonly, copy) NSArray *suspects;
@property (copy) NSArray *unsortedChatTranscript;
@property (copy) NSDate *incidentDate;
@property unsigned long long flags;
@property (copy) NSString *chatRoomName;

- (void).cxx_destruct;
- (id)initWithVictim:(id)a0 suspects:(id)a1 application:(long long)a2;

@end
