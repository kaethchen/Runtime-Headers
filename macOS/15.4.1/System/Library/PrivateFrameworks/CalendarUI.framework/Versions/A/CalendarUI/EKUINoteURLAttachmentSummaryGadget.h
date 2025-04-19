@interface EKUINoteURLAttachmentSummaryGadget : EKUISummaryGadget

@property BOOL hideBecauseAllIsolatedAreVisible;
@property BOOL hasEverHadNote;
@property BOOL hasEverHadURL;
@property BOOL hasEverHadAttachment;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (id)accessibilityIdentifier;
- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (id)addAllString;
- (BOOL)shouldDisplay;

@end
