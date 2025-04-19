@class NSArray;

@interface PPTripEvent : PPScoredEvent

@property (readonly, nonatomic) NSArray *tripParts;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinations;
- (id)destinationsBasedTitle;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 tripParts:(id)a2;

@end
