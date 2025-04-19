@class NUSchema;

@interface NUSchemaNode : NUControlNode

@property (readonly, nonatomic) NUSchema *schema;

- (id)valueForKey:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)childNodeAtIndex:(unsigned long long)a0;
- (id)initWithSchema:(id)a0;
- (id)childNodeForKey:(id)a0;

@end
