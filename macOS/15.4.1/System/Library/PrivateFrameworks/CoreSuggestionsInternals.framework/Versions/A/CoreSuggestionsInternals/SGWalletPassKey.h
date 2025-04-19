@class NSString;

@interface SGWalletPassKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)serialize;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToWalletPassKey:(id)a0;

@end
