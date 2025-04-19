@class NSSet;

@interface BSMutableDescriptionStyle : BSDescriptionStyle

@property (nonatomic) long long verbosity;
@property (nonatomic) long long debugging;
@property (nonatomic) long long collectionLineBreak;
@property (nonatomic) long long proemItemSeparator;
@property (nonatomic) long long bodyItemSeparator;
@property (nonatomic) long long nameTruncation;
@property (nonatomic) long long maximumNameLengthBeforeTruncation;
@property (nonatomic) long long valueTruncation;
@property (nonatomic) long long maximumValueLengthBeforeTruncation;
@property (nonatomic) long long collectionTruncationStyle;
@property (nonatomic) long long maximumItemCountForTruncation;
@property (nonatomic) long long keyValuePairSorting;
@property (copy, nonatomic) NSSet *clientInformation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBodyItemSeparator:(long long)a0;
- (void)setClientInformation:(id)a0;
- (void)setCollectionLineBreak:(long long)a0;
- (void)setCollectionTruncationStyle:(long long)a0;
- (void)setDebugging:(long long)a0;
- (void)setKeyValuePairSorting:(long long)a0;
- (void)setMaximumItemCountForTruncation:(long long)a0;
- (void)setMaximumNameLengthBeforeTruncation:(long long)a0;
- (void)setMaximumValueLengthBeforeTruncation:(long long)a0;
- (void)setNameTruncation:(long long)a0;
- (void)setProemItemSeparator:(long long)a0;
- (void)setValueTruncation:(long long)a0;
- (void)setVerbosity:(long long)a0;

@end
