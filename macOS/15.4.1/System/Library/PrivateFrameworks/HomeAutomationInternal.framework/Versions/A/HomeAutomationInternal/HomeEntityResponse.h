@class NSString, NSArray, HomeEntity;

@interface HomeEntityResponse : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) HomeEntity *entity;
@property (nonatomic, copy) NSArray *taskResponses;

- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
