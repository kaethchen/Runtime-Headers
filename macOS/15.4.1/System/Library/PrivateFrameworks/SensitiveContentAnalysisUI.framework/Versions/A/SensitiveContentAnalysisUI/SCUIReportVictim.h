@class NSString, NSArray, NSDate, SCUIReportAddress;

@interface SCUIReportVictim : NSObject

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *accountID;
@property (copy) NSString *emailAddress;
@property (copy) NSString *fullName;
@property (copy) NSString *appleID;
@property (copy) NSString *phoneNumber;
@property (copy) NSDate *dateOfBirth;
@property (retain) SCUIReportAddress *address;
@property (readonly, copy) NSArray *mediaFiles;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 accountID:(id)a1 mediaFiles:(id)a2;

@end
