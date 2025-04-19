@class NSString;

@interface SFLDefaults : NSObject

@property (readonly) NSString *serviceName;
@property (readonly) NSString *legacyServiceName;
@property (readonly) NSString *legacyAsyncServiceName;

+ (id)shared;
+ (id)standardDefaults;

- (id)description;
- (id)dictionaryRepresentation;
- (id)_objectForKey:(id)a0;
- (id)_objectForPrivilegedKey:(id)a0;

@end
