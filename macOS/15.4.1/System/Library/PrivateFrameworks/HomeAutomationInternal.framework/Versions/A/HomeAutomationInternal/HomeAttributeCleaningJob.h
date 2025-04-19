@class NSString, NSArray, HomeAttributeTargetMap;

@interface HomeAttributeCleaningJob : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long runState;
@property (nonatomic, copy) NSArray *cleanModes;
@property (nonatomic, copy) NSArray *targetAreas;
@property (nonatomic, retain) HomeAttributeTargetMap *targetMap;

- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
