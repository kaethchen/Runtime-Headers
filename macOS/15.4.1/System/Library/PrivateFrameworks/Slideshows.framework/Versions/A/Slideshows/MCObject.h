@class NSString, MCMontage;

@interface MCObject : MCObjectBase

@property (readonly, nonatomic) NSString *objectID;
@property (readonly, nonatomic) MCMontage *montage;

+ (id)objectWithImprint:(id)a0 andMontage:(id)a1;

- (void)dealloc;
- (id)snapshot;
- (BOOL)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (id)_initWithObjectID:(id)a0;
- (void)demolish;
- (id)initFromScratchWithMontage:(id)a0;
- (id)initSnapshot;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;

@end
