@class NSImageView, NSArray, NSTextField, EKAutocompleteSearchResult, NSView;

@interface CalUIOccurrenceTableCellView : NSTableCellView {
    NSImageView *_checkmarkView;
}

@property (retain) EKAutocompleteSearchResult *searchResult;
@property (retain) NSArray *detailsFields;
@property (retain) NSImageView *dotImageView;
@property (retain) NSTextField *titleField;
@property (retain) NSView *dotViewBorder;

+ (id)effectiveEndDate:(id)a0;
+ (BOOL)isMultiDayEvent:(id)a0;
+ (id)titleFontForSelected:(BOOL)a0;

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (id)suggestionString;
- (BOOL)isReminder;
- (id)dateAndTimeStringForDate:(id)a0 inTimeZone:(id)a1 clarifyTimeZoneIfNecessary:(BOOL)a2;
- (id)bottomTimeFieldString;
- (id)clarifyTimeZone:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)clarifyTimeZoneIfNecessary:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)dateStringForDate:(id)a0;
- (id)initWithAutocompleteSearchResult:(id)a0 hideDateField:(BOOL)a1 hideTimeField:(BOOL)a2 width:(double)a3;
- (BOOL)isSuggestedEvent;
- (id)topTimeFieldString;
- (void)updateTitleFontIsSelected:(BOOL)a0;

@end
