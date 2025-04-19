@interface CPLRecordComputeStateVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long stage;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;
- (id)redactedDescription;
- (id)asString;
- (id)initWithMajorVersion:(unsigned long long)a0 stage:(unsigned long long)a1;

@end
