@class NSArray;

@interface EWSDeleteItemType : EWSBaseRequestType

@property (copy, nonatomic) NSArray *ItemIds;
@property (nonatomic) long long DeleteType;
@property (nonatomic) long long SendMeetingCancellations;
@property (nonatomic) long long AffectedTaskOccurrences;

+ (id)definition;

- (void).cxx_destruct;

@end
