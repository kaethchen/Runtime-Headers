@class NSString;

@interface TSSSpec : TSCKSosBase

@property (readonly) NSString *operationPropertyName;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)apply:(id)a0;
- (BOOL)canApplyOnObject:(id)a0;
- (id)getUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)a0;
- (BOOL)isUnsetSpec;
- (id)specWithCurrentProperty:(id)a0;

@end
