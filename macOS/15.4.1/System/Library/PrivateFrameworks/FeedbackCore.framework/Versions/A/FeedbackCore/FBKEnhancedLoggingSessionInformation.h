@class NSString, NSSet, FBKContentItem, NSDate, NSNumber;

@interface FBKEnhancedLoggingSessionInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *feedbackID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSNumber *followupID;
@property (retain, nonatomic) NSSet *deviceIdentifiers;
@property (nonatomic) long long enhancedLoggingDuration;
@property (nonatomic) long long enhancedLoggingRetryCount;
@property (readonly, nonatomic) FBKContentItem *contentItem;
@property (readonly, nonatomic) NSSet *devices;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)searchText;
- (id)initWithContentItem:(id)a0 followup:(id)a1 filePredicate:(id)a2 devices:(id)a3;

@end
