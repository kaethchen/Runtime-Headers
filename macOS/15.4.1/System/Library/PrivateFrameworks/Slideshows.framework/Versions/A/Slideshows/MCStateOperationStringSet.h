@class NSString;

@interface MCStateOperationStringSet : MCStateOperation

@property (copy) NSString *string;

+ (id)stateOperationForTargetPlugObjectID:(id)a0 withStateKey:(id)a1 andString:(id)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
