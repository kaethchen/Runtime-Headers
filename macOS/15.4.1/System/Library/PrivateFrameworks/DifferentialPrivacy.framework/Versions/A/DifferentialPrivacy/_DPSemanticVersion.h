@interface _DPSemanticVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion;
@property (readonly, nonatomic) unsigned long long patchVersion;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 patchVersion:(unsigned long long)a2;
- (BOOL)isBackwardCompatibleWithVersion:(id)a0;

@end
