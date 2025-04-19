@class NSColor;

@interface CNAutocompleteColorRepository : NSObject

@property (class, readonly, nonatomic) NSColor *autocompleteTableBackgroundColor;
@property (class, readonly, nonatomic) NSColor *autocompleteSeparatorBackgroundColor;
@property (class, readonly, nonatomic) NSColor *autocompleteHeaderLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteLabelSelectedTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteCompoundLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteExtendedResultNoNameLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteExtendedResultNameLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteExtendedResultIdentifierLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteExtendedResultAccountLabelTextColor;
@property (class, readonly, nonatomic) NSColor *autocompleteIDSPendingColor;
@property (class, readonly, nonatomic) NSColor *autocompleteUsesFaceTimeColor;
@property (class, readonly, nonatomic) NSColor *autocompleteUsesSMSColor;
@property (class, readonly, nonatomic) NSColor *autocompleteFailureColor;
@property (class, readonly, nonatomic) NSColor *autocompletePresentationGlyphColor;
@property (class, readonly, nonatomic) NSColor *autocompleteEmphasizedColor;

@end
