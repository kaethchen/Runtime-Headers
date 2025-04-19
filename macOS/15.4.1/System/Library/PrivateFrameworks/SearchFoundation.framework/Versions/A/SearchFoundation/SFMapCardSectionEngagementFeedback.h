@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (retain, nonatomic) NSData *modifiedPlacemarkData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
