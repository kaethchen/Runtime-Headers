@interface CADGenerationStampedObjectID : CADObjectID

@property (readonly, nonatomic) int restoreGeneration;

- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)initWithEntityType:(int)a0 entityID:(int)a1 databaseID:(int)a2 generation:(int)a3;
- (id)initWithEntityType:(int)a0 entityID:(int)a1 generation:(int)a2;

@end
