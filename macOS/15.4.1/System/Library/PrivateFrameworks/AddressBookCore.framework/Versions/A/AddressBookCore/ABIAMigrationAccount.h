@class NSString, NSURL;
@protocol ABAccountConfiguration;

@interface ABIAMigrationAccount : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, retain) id<ABAccountConfiguration> config;
@property (readonly) Class sourceClass;
@property (readonly, copy) NSURL *baseUrl;
@property (readonly, copy) NSString *password;
@property (readonly) BOOL hasACAccountIdentifier;

- (void)dealloc;
- (id)description;
- (id)initWithBuilder:(id)a0;

@end
