@class NSString, NSDate;

@interface _NSTextSmartReplyCompactContextHistory : NSObject

@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSDate *mostRecentEntryDate;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextHistory:(id)a0;

@end
