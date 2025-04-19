@class NSString, NSDictionary, NSArray, NSColor;

@interface ABCardViewStyle : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *nameViewHeadlineFontName;
@property double nameViewHeadlineFontSize;
@property (retain) NSColor *nameViewHeadlineTextColor;
@property (retain) NSDictionary *nameViewHeadlinePlaceholderAttributes;
@property (retain) NSString *nameViewTaglineFontName;
@property double nameViewTaglineFontSize;
@property (retain) NSColor *nameViewTaglineTextColor;
@property (retain) NSDictionary *nameViewTaglinePlaceholderAttributes;
@property double nameViewFirstRowVerticalOffset;
@property double nameViewInterrowPadding;
@property double nameViewPhotoInsetLeading;
@property BOOL alignsNameViewTextWithImageMidpoint;
@property (retain) NSString *datumLabelFontName;
@property double datumLabelFontSize;
@property (retain) NSColor *datumLabelTextColor;
@property (retain) NSColor *datumLabelSuggestionTextColor;
@property (retain) NSColor *datumLabelMouseOverTextColor;
@property (retain) NSColor *datumLabelMouseOverHighlightColor;
@property (retain) NSColor *datumLabelPopupTextColor;
@property BOOL shouldAlignLabelWithTopOfValue;
@property (retain) NSString *datumValueFontName;
@property double datumValueFontSize;
@property (retain) NSColor *datumValueTextColor;
@property (retain) NSColor *datumValueSuggestionTextColor;
@property (retain) NSColor *datumValueMouseOverTextColor;
@property (retain) NSColor *datumValueMouseOverHighlightColor;
@property (retain) NSDictionary *datumValuePlaceholderAttributes;
@property double interPropertyPadding;
@property double intraDatumPadding;
@property double interColumnHorizontalPadding;
@property double cardViewTopMargin;
@property double cardViewBottomMargin;
@property double cardViewLeftMargin;
@property double cardViewRightMargin;
@property double cardTemplateViewTopMargin;
@property double cardViewMinimumHeight;
@property double collectionSeparatorInsetLeading;
@property double collectionSeparatorInsetTrailing;
@property double collectionViewLeftMargin;
@property double collectionTemplateViewLeftMargin;
@property (retain) NSArray *displayedCollectionViewProperties;
@property BOOL allowsLabelRolloverActions;
@property BOOL allowsNoteEditing;
@property BOOL allowsPhotoEditing;
@property BOOL allowsImmediateEditing;
@property BOOL isContentSizeObservable;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)styleProvider;
- (id)initWithStyleProvider:(id)a0;

@end
