@class NSString;

@interface ABBookCommand : NSObject <ABCommand>

@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void)visit:(id)a0;

@end
