@interface NSDeserializer : NSObject

+ (id)deserializePropertyListFromData:(id)a0 atCursor:(unsigned int *)a1 mutableContainers:(BOOL)a2;
+ (id)deserializePropertyListFromData:(id)a0 mutableContainers:(BOOL)a1;
+ (id)deserializePropertyListLazilyFromData:(id)a0 atCursor:(unsigned int *)a1 length:(unsigned int)a2 mutableContainers:(BOOL)a3;

@end
