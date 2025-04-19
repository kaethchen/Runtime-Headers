@class NSString;

@interface SGSchemaOrgKey : NSObject <SGEntityKey> {
    NSString *_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToSchemaOrgKey:(id)a0;

@end
