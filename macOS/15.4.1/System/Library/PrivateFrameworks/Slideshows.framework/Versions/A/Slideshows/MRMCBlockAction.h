@interface MRMCBlockAction : MCAction

@property (copy) id /* block */ block;

+ (id)blockActionWithBlock:(id /* block */)a0;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
