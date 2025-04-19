@class NSDate;

@interface SOAMessageTime : NSObject

@property (retain, nonatomic) NSDate *time;
@property (nonatomic) long long messageID;

+ (id)messageTimeForMessage:(id)a0;

- (void).cxx_destruct;

@end
