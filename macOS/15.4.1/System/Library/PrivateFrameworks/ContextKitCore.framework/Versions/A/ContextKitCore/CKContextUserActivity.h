@class NSUUID, NSUserActivity, NSString, NSDate, NSNumber, NSData;

@interface CKContextUserActivity : NSObject <NSSecureCoding> {
    double _recordedTimeIntervalSince1970;
    NSData *_userActivityData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSNumber *numberOfOccurrences;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) NSDate *entryDate;

- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (void)prepareForDonationWithCompletionHandler:(id /* block */)a0;

@end
