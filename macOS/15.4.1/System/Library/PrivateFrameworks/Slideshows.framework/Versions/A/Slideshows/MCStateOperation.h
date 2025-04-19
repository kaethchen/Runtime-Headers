@class NSString;

@interface MCStateOperation : MCAction

@property (copy) NSString *stateKey;
@property (nonatomic) BOOL alwaysNotifies;
@property (nonatomic) BOOL recordsTime;

+ (id)stateOperationForTargetPlugObjectID:(id)a0 withStateKey:(id)a1;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
