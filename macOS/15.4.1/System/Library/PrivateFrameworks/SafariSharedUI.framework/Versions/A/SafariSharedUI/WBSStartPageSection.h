@class WBSAction, NSString, NSImage, WBSStartPageBanner, NSArray;

@interface WBSStartPageSection : NSObject {
    id /* block */ _configurationProvider;
}

@property (readonly, nonatomic) long long effectiveItemIdentifiersCount;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) WBSStartPageBanner *contentBanner;
@property (readonly, copy, nonatomic) id /* block */ siteIconConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ siteCardConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ attributedRichLinkConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ squareRichLinkConfigurationProvider;
@property (readonly, copy, nonatomic) id /* block */ siteRowConfigurationProvider;
@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *icon;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) WBSAction *supplementaryAction;
@property (readonly, nonatomic) WBSStartPageBanner *banner;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsed;
@property (nonatomic) long long numberOfRowsVisibleWhenCollapsedInCompactWidth;
@property (nonatomic) BOOL usesLargeTitle;
@property (nonatomic) BOOL showsTopSeparator;
@property (nonatomic) BOOL expandsModally;
@property (nonatomic) long long maximumNumberOfPages;

+ (id)separatorSectionWithIdentifier:(id)a0;
+ (id)actionSectionWithIdentifier:(id)a0 actions:(id)a1;
+ (id)attributedRichLinkSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)attributedRichLinkSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)bannerSectionWithIdentifier:(id)a0 banner:(id)a1;
+ (id)bannerSectionWithIdentifier:(id)a0 title:(id)a1 banner:(id)a2;
+ (id)cardSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)cardSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)footerSectionWithIdentifier:(id)a0 action:(id)a1;
+ (id)headingSectionWithIdentifier:(id)a0 title:(id)a1;
+ (id)iconSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 supplementaryAction:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)iconSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 supplementaryAction:(id)a4 identifiers:(id)a5 configurationProvider:(id /* block */)a6;
+ (id)listSectionWithIdentifier:(id)a0 actions:(id)a1 banner:(id)a2 identifiers:(id)a3 configurationProvider:(id /* block */)a4;
+ (id)listSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;
+ (id)squareRichLinkSectionWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 identifiers:(id)a4 configurationProvider:(id /* block */)a5;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)effectiveItemIdentifiersWithMaximumCount:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 actions:(id)a2 banner:(id)a3 itemType:(long long)a4 itemIdentifiers:(id)a5 configurationProvider:(id /* block */)a6;

@end
