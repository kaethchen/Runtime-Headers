@class NSString, NTPBColorGradientPair, NTPBColorPair;

@interface NTPBTodayBannerConfig : PBCodable <NSCopying> {
    struct { unsigned char daysVisibleToNewSubscribers : 1; unsigned char numberOfAppearancesToHide : 1; unsigned char numberOfTapsToHide : 1; unsigned char backgroundMethod : 1; unsigned char imageMethod : 1; unsigned char isEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) BOOL hasActionURL;
@property (retain, nonatomic) NSString *actionURL;
@property (readonly, nonatomic) BOOL hasActionButtonText;
@property (retain, nonatomic) NSString *actionButtonText;
@property (nonatomic) BOOL hasImageMethod;
@property (nonatomic) int imageMethod;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL hasBackgroundMethod;
@property (nonatomic) int backgroundMethod;
@property (readonly, nonatomic) BOOL hasSolidBackgroundColorPair;
@property (retain, nonatomic) NTPBColorPair *solidBackgroundColorPair;
@property (readonly, nonatomic) BOOL hasGradientBackgroundPair;
@property (retain, nonatomic) NTPBColorGradientPair *gradientBackgroundPair;
@property (nonatomic) BOOL hasNumberOfAppearancesToHide;
@property (nonatomic) unsigned long long numberOfAppearancesToHide;
@property (nonatomic) BOOL hasNumberOfTapsToHide;
@property (nonatomic) unsigned long long numberOfTapsToHide;
@property (nonatomic) BOOL hasDaysVisibleToNewSubscribers;
@property (nonatomic) unsigned long long daysVisibleToNewSubscribers;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
