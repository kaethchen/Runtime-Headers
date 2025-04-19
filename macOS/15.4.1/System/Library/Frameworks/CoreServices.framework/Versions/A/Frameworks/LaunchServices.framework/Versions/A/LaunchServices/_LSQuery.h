@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLegacy) BOOL legacy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_init;
- (BOOL)_remoteResolutionIsExpensive;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)a0 error:(id *)a1;

@end
