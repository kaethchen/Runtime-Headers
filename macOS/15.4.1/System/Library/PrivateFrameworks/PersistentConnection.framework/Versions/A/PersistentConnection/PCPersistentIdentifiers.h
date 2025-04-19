@interface PCPersistentIdentifiers : NSObject

+ (id)_processNamePrefix;
+ (unsigned long long)hostUniqueIdentifier;
+ (int)pidFromMatchingIdentifer:(id)a0;
+ (id)processNameAndPidIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)a0;

@end
