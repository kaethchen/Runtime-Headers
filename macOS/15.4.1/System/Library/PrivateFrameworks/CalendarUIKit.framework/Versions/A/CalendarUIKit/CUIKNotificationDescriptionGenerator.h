@class NSNumberFormatter, NSDateFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateTimeFormatter;
}

+ (id)sharedGenerator;
+ (id)stringWithAutoCommentRemoved:(id)a0;
+ (id)stringWithOnlyAutoComment:(id)a0;
+ (id)_autoCommentForProposedTime:(id)a0 timeZone:(id)a1;
+ (id)comment:(id)a0 withInsertedAutoCommentForDate:(id)a1 timeZone:(id)a2;
+ (id)timeSensitiveString;

- (void).cxx_destruct;
- (id)_sharedDateFormatter;
- (id)conflictStringForConflictDetails:(id)a0 maxTitleLength:(unsigned long long)a1;
- (id)_adjustedTitle:(id)a0 maxLength:(unsigned long long)a1;
- (id)_sharedDateTimeFormatter;
- (id)_sharedNumberFormatter;
- (id)_sharedTimeFormatter;
- (id)conflictStringForConflictDetails:(id)a0 descriptions:(id)a1;
- (id)conflictStringForConflictDetails:(id)a0 maxTitleLength:(unsigned long long)a1 descriptions:(id)a2;
- (id)timePeriodForTimeInterval:(id)a0;

@end
