@class NSString, NSArray, NSDate;

@interface SSReminderResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *reminder;
@property (retain, nonatomic) NSString *note;
@property (retain, nonatomic) NSArray *hashtags;
@property (nonatomic) BOOL isAllDay;
@property (nonatomic) BOOL isFlagged;
@property (nonatomic) BOOL isRecurring;
@property (nonatomic) BOOL isCompleted;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;
+ (id)stringWithCompletionDate:(id)a0 dueDate:(id)a1 modificationDate:(id)a2;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildTitle;

@end
