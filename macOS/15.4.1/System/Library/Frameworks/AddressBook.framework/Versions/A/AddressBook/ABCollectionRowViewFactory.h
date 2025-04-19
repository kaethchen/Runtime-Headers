@class ABCardViewStyleProvider;

@interface ABCollectionRowViewFactory : NSObject

@property (nonatomic) BOOL shouldFormatURLs;
@property (nonatomic) BOOL shouldBuildActionGlyphs;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;

+ (id)infoButtonNamedImageWrapper;

- (id)init;
- (void).cxx_destruct;
- (id)accessibilityTitleForGlyphName:(id)a0;
- (id)glyphNamedImageWrapperWithName:(id)a0;
- (void)buildPrivacyCheckboxForRowView:(id)a0;
- (id)rowViewForItem:(id)a0;
- (id)addressingGrammarRowViewForItem:(id)a0;
- (id)alertToneRowViewForItem:(id)a0;
- (void)applyHuggingAndCompressionSettingsToValueView:(id)a0;
- (id)buildActionGlyphNamed:(id)a0;
- (void)buildActionGlyphsForRowView:(id)a0;
- (void)buildAddRemoveControlsForRowView:(id)a0;
- (void)buildCommonViewsForRowView:(id)a0;
- (void)buildFocusRingViewForRowView:(id)a0;
- (void)buildLabelViewForRowView:(id)a0;
- (void)buildMessagingServiceViewForRowView:(id)a0;
- (void)buildNoteValueViewForRowView:(id)a0;
- (void)buildPreferredNameValueViewForRowView:(id)a0;
- (void)buildSimpleLinkedTextFieldForRowView:(id)a0;
- (void)buildStackViewForRowView:(id)a0;
- (void)buildStaticIdentityVerifiedBadgeForRowView:(id)a0;
- (void)buildSuggestedGlyphForRowView:(id)a0;
- (void)buildURLFormattingValueViewForRowView:(id)a0;
- (void)buildValueViewForRowView:(id)a0;
- (id)faceTimeRowViewForItem:(id)a0;
- (id)genericRowViewForItem:(id)a0;
- (id)linkedPeopleRowViewForItem:(id)a0;
- (id)messagingRowViewForItem:(id)a0;
- (id)noteRowViewForItem:(id)a0;
- (id)postalAddressRowViewForItem:(id)a0;
- (id)preferredNameRowViewForItem:(id)a0;
- (id)urlRowViewForItem:(id)a0;

@end
