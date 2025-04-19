@class NSString;

@interface _EDSenderAttributes : NSObject <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isVIP;
@property (nonatomic) BOOL isContact;
@property (nonatomic) BOOL isCoreRecent;
@property (nonatomic) BOOL isPrimarySender;

- (BOOL)isEqual:(id)a0;
- (id)cachedSelf;
- (id)initWithisVIP:(BOOL)a0 isContact:(BOOL)a1 isCoreRecent:(BOOL)a2 isPrimarySender:(BOOL)a3;

@end
