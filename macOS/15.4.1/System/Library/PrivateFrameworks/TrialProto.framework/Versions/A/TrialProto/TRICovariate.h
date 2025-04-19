@class NSString;

@interface TRICovariate : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *typedAssignmentTreeName;
@property (nonatomic) BOOL hasTypedAssignmentTreeName;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) BOOL hasSchemaVersion;

+ (id)descriptor;

@end
