@class NSString;

@interface STMSummaryDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *summaryMessage;
@property (nonatomic) BOOL isDestructiveAction;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic) BOOL actionNeedsSheetClosing;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
