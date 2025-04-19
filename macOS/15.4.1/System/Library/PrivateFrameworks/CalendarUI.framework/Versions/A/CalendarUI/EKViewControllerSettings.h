@interface EKViewControllerSettings : NSObject

@property BOOL canResizeWindow;
@property double topMargin;
@property double bottomMargin;
@property double leftMargin;
@property double rightMargin;
@property double titleFontSize;
@property double contentFontSize;
@property double expandedContentFontSize;
@property double labelFontSize;
@property double smallLabelFontSize;
@property BOOL useWideSpacing;
@property BOOL showCalendarPopUp;
@property BOOL showEventSuggestions;
@property BOOL showRecurrenceNavigation;
@property double leftDividerMargin;
@property double rightDividerMargin;
@property BOOL isReadOnly;
@property BOOL miniInspector;
@property BOOL showLinksAsText;
@property BOOL hideButtons;
@property BOOL hideEventSuggestions;
@property BOOL disableAttachments;
@property BOOL allowsCustomPickers;
@property BOOL delayDatePickerBecomingKey;
@property BOOL isSpotlightExtension;
@property BOOL useAlternateFont;

- (id)init;

@end
