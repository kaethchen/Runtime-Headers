@interface TSUPermanentObject : NSObject

@property (readonly, nonatomic) BOOL isPermanent;

- (oneway void)release;
- (id)retain;
- (void)markAsPermanent;

@end
