@interface MessageProtection.TetraVersions : NSObject

+ (unsigned int)currentTetraVersion;
+ (BOOL)isWireCompatibleWith:(unsigned int)a0;

- (id)init;

@end
