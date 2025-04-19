@class SFButtonItem, SFSearchResult, SFCommand, SFCardSection, SFResultSection, SFPhotosAttributes;

@interface SFCommandEngagementFeedback : SFFeedback

@property (retain, nonatomic) SFSearchResult *result;
@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) SFButtonItem *button;
@property (retain, nonatomic) SFResultSection *resultSection;
@property (retain, nonatomic) SFPhotosAttributes *photosAttributes;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommand:(id)a0 cardSection:(id)a1;
- (id)initWithCommand:(id)a0 cardSection:(id)a1 result:(id)a2 button:(id)a3;

@end
