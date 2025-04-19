@class NSString, SCUIReportAddress, NSArray;

@interface SCUIReportSuspect : NSObject

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *accountID;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullName;
@property (copy) NSString *phoneNumber;
@property (copy) SCUIReportAddress *address;
@property (readonly, copy) NSArray *sensitiveMediaFiles;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 accountID:(id)a1 sensitiveMediaFiles:(id)a2;

@end
