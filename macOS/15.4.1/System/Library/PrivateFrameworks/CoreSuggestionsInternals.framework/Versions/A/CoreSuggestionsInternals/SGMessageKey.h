@class NSString;

@interface SGMessageKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *source;
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
- (id)initWithSource:(id)a0 uniqueIdentifier:(id)a1;
- (BOOL)isEqualToMessageKey:(id)a0;

@end
