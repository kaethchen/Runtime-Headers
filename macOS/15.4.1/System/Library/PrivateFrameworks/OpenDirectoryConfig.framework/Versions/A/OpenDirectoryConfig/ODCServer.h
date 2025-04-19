@class NSString;

@interface ODCServer : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned int type;
@property (readonly) unsigned int status;
@property (readonly) BOOL authBound;
@property (readonly) BOOL inAuthSearchPath;
@property (readonly) BOOL inContactsSearchPath;

+ (id)configuredServers:(id)a0 withStatus:(BOOL)a1 error:(id *)a2;
+ (id)readEnabledServices:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 type:(unsigned int)a1 status:(unsigned int)a2 authBound:(BOOL)a3 inAuthSearchPath:(BOOL)a4 inContactsSearchPath:(BOOL)a5;

@end
