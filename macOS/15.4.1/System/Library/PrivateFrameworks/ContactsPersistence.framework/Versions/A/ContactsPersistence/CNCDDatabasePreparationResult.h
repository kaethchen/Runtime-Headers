@class NSURL, NSDictionary;

@interface CNCDDatabasePreparationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic, getter=isPristineDatabase) BOOL pristineDatabase;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) BOOL didMigrate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1 pristineDatabase:(BOOL)a2 readOnly:(BOOL)a3 didMigrate:(BOOL)a4;

@end
