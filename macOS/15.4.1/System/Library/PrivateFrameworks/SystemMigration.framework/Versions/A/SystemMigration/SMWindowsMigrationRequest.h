@class NSString, NSMutableArray;

@interface SMWindowsMigrationRequest : SMMigrationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *destinationPath;
@property (retain) NSMutableArray *systemComponentDicts;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (id)exportXPCDict;
- (void)updateAutoLoginUser;

@end
