@class NSArray, CADObjectID;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    int _entityType;
    int _rowID;
    int _databaseID;
    NSArray *_loadedValues;
    CADObjectID *_objectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectID;
- (id)loadedValues;
- (id)initWithCalEntity:(void *)a0 loadedValues:(id)a1;
- (id)initWithCalEntity:(void *)a0;

@end
