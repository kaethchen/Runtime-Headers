@class NSArray, HomeUserTask, INDateComponentsRange;

@interface ControlHomeIntent : INIntent

@property (nonatomic, retain) HomeUserTask *userTask;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, retain) INDateComponentsRange *time;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
