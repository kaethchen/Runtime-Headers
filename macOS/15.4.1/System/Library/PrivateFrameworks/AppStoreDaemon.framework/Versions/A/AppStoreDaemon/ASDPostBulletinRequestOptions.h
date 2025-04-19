@class NSString, NSURL, NSDate;

@interface ASDPostBulletinRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) NSURL *actionButtonURL;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long destinations;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;

@end
