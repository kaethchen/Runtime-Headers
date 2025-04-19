@class NSString, HomeUserTask;

@interface HomeUserTaskResponse : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) HomeUserTask *userTask;
@property (nonatomic) long long taskOutcome;

- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
