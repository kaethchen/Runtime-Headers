@class NSString;

@interface ABCollectionSendMailAction : ABCollectionAbstractAction <ABCollectionAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithTarget:(id)a0;
- (BOOL)validateWithTarget:(id)a0;

@end
