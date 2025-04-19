@interface NSSQLAttribute : NSSQLColumn

- (void)dealloc;
- (id)attributeDescription;
- (id)initForReadOnlyFetchWithExpression:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (BOOL)isFileBackedFuture;

@end
