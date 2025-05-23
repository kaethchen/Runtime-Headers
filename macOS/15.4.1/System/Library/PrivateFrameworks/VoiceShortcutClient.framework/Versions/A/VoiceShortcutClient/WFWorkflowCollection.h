@class NSString;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 isFolder:(BOOL)a1 name:(id)a2 glyphCharacter:(unsigned short)a3 isDeleted:(BOOL)a4;

@end
