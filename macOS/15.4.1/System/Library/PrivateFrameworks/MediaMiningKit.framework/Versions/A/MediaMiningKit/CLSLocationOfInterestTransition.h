@class NSUUID, NSDateInterval;

@interface CLSLocationOfInterestTransition : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDateInterval *transitionInterval;
@property (readonly, nonatomic) long long transportationMode;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 transitionInterval:(id)a1 transportationMode:(long long)a2;

@end
