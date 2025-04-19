@class NSError;

@interface BRCMigrationParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL cloneOnly;
@property (retain) NSError *errorOverride;
@property unsigned long long originatorIdOverride;
@property BOOL dropAccountFile;
@property BOOL dropClientState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
